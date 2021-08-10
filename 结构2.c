#include <stdio.h>



struct Martial
{
    int id;
    char Name[50];
    int count; //门派人数
    int tpye; //门派类型  1-正派；2-中立；3-邪派
};

struct Player
{
    int id;
    char name[50];
    char pass[50]; //登录密码
    char sex;
    struct Martial martial;
};


int main()
{
    //玩家player
    //所属门派（种族、阵营）
    struct Player player1 = {1, "和尚洗头用飘柔", "123456", 'f', {1, "武当", 500, 1}};
    struct Player palyer2 = {2, "Dm_7", "1233412", 'm', {1, "地挂牌", 500 ,3}};
    struct Player *ptr_player2 = &palyer2;
    printf("%s\t%s\n", palyer2.name, palyer2.martial.Name);
    printf("%s\t%s\n", (*ptr_player2).name, (*ptr_player2).martial.Name);
    printf("%s\t%s\n", ptr_player2->name, ptr_player2->martial.Name);
}