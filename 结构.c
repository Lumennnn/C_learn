#include <stdio.h>
#include <string.h>

// struct Hero
// {
//     int id;
//     char name[50];
//     int level;
//     int hp;
//     int mp;
//     char skill[50];
// };


// int main()
// {
//     // 使用结构体
//     struct  Hero hero1;
//     hero1.id = 6;
//     strcpy(hero1.name, "德玛西亚");
//     hero1.level = 1;
//     hero1.hp = 500;
//     hero1.mp = 100;
//     strcpy(hero1.skill, "大宝剑");
//     struct Hero hero2 = {2, "祥林嫂", 10, 1000, 200, .skill="呢喃"};

//     printf("%d\t%s\t%d\t%d\t%d\t%s\n",
//             hero1.id, hero1.name, hero1.level,
//             hero1.hp, hero1.mp, hero1.skill);



//     return 0;
// }

struct Brith
{
    int year;
    int month;
    int data;
};

struct Hero
{
    char * name;
    int level;
    char * job;
    char * skill;
};
//动态赋值时会出错，指针使用前未赋内存，使用之前应用malloc赋动态内存
void main()
{
    struct Hero jackieChan;
    jackieChan.name = "JackieChan";
    jackieChan.level = 25;
    jackieChan.job = "战士";
    jackieChan.skill = "醉拳";
}