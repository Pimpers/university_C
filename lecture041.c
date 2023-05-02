#include <stdio.h>


int main()
{
int i =30;
int k;
printf("주인공의 공격력을 입력해주세요!:");
scanf("%d",&k);
printf("주인공은  공격력은%d입니다.",k);
printf("주인공이 적을 공격하여%d의 데미지를 입혔습니다.",k);
i=i-k;

if(i>=0)
{ 
	printf("적의 잔여 HP:%d",i);
	printf("적이  주인공을 공격하여 주인공이 뒤졌습니다.");
	printf("Game OVer");

}
else
 {
	printf("적의 잔여 HP:%d",i);
	printf("적을 물리쳤습니다!");
	printf("HAPPY END");
}

return 0;
}

