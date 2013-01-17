/*
   본 프로그램은 "CODELIFE Development"의 소유물이며 자산입니다.
   개발자의 동의없이 무단 수정, 복제, 배포를 허용하나 원 출처를 밝혀주세요.
   */

/*
   프로그램 이름 : Mac_FAK
   프로그램 모듈 : N/A
   프로그램 코드네임 : N/A
   프로그램 버전 : 1.0
   프로그램 개발자 : SeongTae Jeong
   프로그램 개발자 이메일 주소 : JSTae76@icloud.com
   */

/*
   소스코드 작업 기록
   2013.01.17. 첫 코드 작성
   */

/*
   알려진 문제점
   N/A
   */

#include <stdio.h>
#include <stdlib.h>

int main(void){
		int c_number=1;
		int loop=1;

		
		do{
				system("clear");
				printf("Mac_FAK\n");
				printf("Version 1.0\n\n");

				printf("1. 닥, 런치패드, 미션 컨트롤 재시작\n");
				printf("2. 원도우, 시스템 그래픽 재시작\n");
				printf("3. 알림센터 재시작\n");
				printf("4. 파인더 재시작\n");;
				printf("5. OS X 재시작\n");
				printf("6. 개발자 정보\n");
				printf("9. 종료\n");
				printf("명령값을 입력하세요 :_\b");
				scanf("%d", &c_number);

				switch(c_number){
						case 1:
								system("killall Dock");
								break;
						case 2:
								system("killall SystemUIServer");
								break;
						case 3:
								system("killall NotificationCenter");
								break;
						case 4:
								system("killall Finder");
							break;
						case 5:
								system("sudo reboot");
								break;
						case 6:
								printf("\n");
								printf("SeongTae Jeong\n");
								printf("JSTae76@icloud.com\n");
								system("read -p ""계속하려면\\ 아무\\ 키나\\ 누르십시요..""");
								break;
						case 9:
								break;
						default:
									printf("잘못된 명령 값입니다.\n");
				}
				printf("종료하시려면 0을 입력하세요. (계속 진행하려면 1) :_\b");
				scanf("%d", &loop);
		}while(loop==1);
}
