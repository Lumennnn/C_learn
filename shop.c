#include <stdio.h>
#include <string.h>
#pragma warning(disable : 4996)
//商品结构
typedef struct _prop{
	int id;
	char name[50];
	double price; //单价
	int stock;//库存量\叠加数量
	char desc[200];//商品描述
}Prop;

//背包结构
typedef struct _bag {
	int playerId;//所属玩家id
	int count;//道具数量
	int max;//背包插槽总数,可以购买
	Prop props[8];//当前背包中道具数组
}Bag;

//玩家结构
typedef struct _player {
	int id;
	char name[50];
	char pass[50];
	Bag bag;
	double gold; //自动转换单位
	double sysee;//元宝数量
}Player;

Prop* props;
Player* players;
int propsCount = 0;
int playerCount = 0;
void Init(); //初始化
void ShowProps();
void ShowPlayers();
void Trade(Player *player, int propId);

int main()
{	
	Init(); //初始化游戏数据
	//打印初始化数据
	printf("\n*****************交易前*****************\n");
	ShowProps();
	ShowPlayers();
	Trade(&players[0], 3);
	Trade(&players[0], 3);
	printf("\n*****************交易后*****************\n");
	ShowProps();
	ShowPlayers();
	return 0;
}

void Init() 
{
	//初始化数据
	static Prop propArray[] = {
		{1, "双倍经验卡", 3000, 10, "双击666"},
		{2, "腐烂的道袍", 5000, 8, "只可远观不可亵玩"},
		{3, "生锈的铁剑", 8000, 10, "新手专用"},
		{4, "无极大袍子", 13000, 8, "刀枪不入，水火不侵"},
		{5, "直升1级丹", 83000, 10, "嗖嗖嗖！"},
	};
	props = propArray;//设定指针的指向
	propsCount = 5;
	//propsCount = sizeof(propArry) / sizeof(Prop);
	static Player playerArray[] = {
		{1, "超级毛毛虫", "123456", .gold = 50000, .bag.max=8},
		{2, "塔罗奥特曼", "123456", .gold = 150000, .bag.max = 8},
		{3, "元始天尊", "123456", .gold = 30000, .bag.max = 8},
		{4, "星河灿烂", "123456", .gold = 250000, .bag.max = 8},

	};
	players = playerArray;
	playerCount = 4;
}

void ShowProps()
{
	int i;
	if(props == NULL) return;
	printf("%-7s%-14s%-6s\t库存\t商品介绍\n", "编号","名称", "单价");
	for (i = 0; i < propsCount; i++) 
	{
		printf("%-5d%-14s%-6.0lf\t%d\t%s\n", props[i].id, props[i].name, props[i].price, props[i].stock, props[i].desc);
	}
}

void ShowPlayers() 
{
	int i, j;
	if (players == NULL) return;
	printf("编号\t%-14s金币\n", "名称");
	for (i = 0; i < playerCount; i++) 
	{
		printf("%d\t%-14s%.0lf\n", players[i].id, players[i].name, players[i].gold);
		for (j = 0; j < players[i].bag.count; j++) {
			printf("\t%s\t%d\t", players[i].bag.props[j].name, players[i].bag.props[j].stock);
		}
		printf("\n");
	}


}

//交易函数，需要修改接受值
void Trade(Player* player, int propId) {
	int i;
	//需要判断：商品的库存，玩家余额，玩家背包空间
	Prop * tradeProp = NULL; //要购买的商品指针  = NULL
	for (i = 0; i < propsCount; i++) 
	{
		if (propId == props[i].id)
		{
			tradeProp = &props[i]; 
			//tradeProp = props + i;
			if (tradeProp->stock <= 0) 
			{
				printf("地主家都没有余粮了，商店都被卖空了！\n");
				return;
			}

			if (player->gold < tradeProp->price) 
			{
				printf("钱包都是瘪的，这可是看钱的社会！\n");
				return;
			}

			if (player->bag.count >= player->bag.max && player->bag.count != 0) 
			{
				printf("背包已经满了，交易失败！\n");
			}
			//满足交易条件后，执行交易的业务操作
			//商品库存-1
			tradeProp->stock--;
			//扣除玩家金币
			player->gold -= tradeProp->price;
			//玩家背包道具增加
			//判断玩家背包中是否已经有该商品，如果没有则添加到背包，有则数量加一
			for (i = 0; i < player->bag.count; i++) 
			{
				//如果背包中存在这个商品
				if (propId == player->bag.props[i].id) 
				{
					player->bag.props[i].stock++;
					break;
				}
			}
			//如果没有则添加到背包
			if (i == player->bag.count) 
			{
				//向背包中创建一个商品
				int newIndex = player->bag.count;
				player->bag.props[newIndex].id = tradeProp->id;
				player->bag.props[newIndex].price = tradeProp->price;
				player->bag.props[newIndex].stock = 1;
				strcpy(player->bag.props[newIndex].name, tradeProp->name);
				strcpy(player->bag.props[newIndex].desc, tradeProp->desc);
				player->bag.count++;
			}
		}
	}
}