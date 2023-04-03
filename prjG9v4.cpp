#include <stdio.h>
#include <graphics.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// Ve cac doi tuong
char* drawPlayerRight() {
	setfillstyle(1, LIGHTGREEN);
	bar(13, 0, 20, 5);
	bar(22, 0, 29, 5);
	bar(14, 4, 17, 13);
	bar(23, 4, 26, 13);
	bar(8, 12, 33, 41);
	setfillstyle(1, DARKGRAY);
	bar(16, 0, 20, 3);
	bar(25, 0, 29, 3);
	setfillstyle(1, YELLOW);
	bar(18, 23, 33, 41);
	setfillstyle(1, LIGHTRED);
	bar(23, 29, 31, 41);
	int size = imagesize(1, 1, 40, 40);
	char *pR = (char*)malloc(size);
	getimage(1, 1, 40, 40, pR);
	return pR;
}

char* drawPlayerLeft() {
	setfillstyle(1, LIGHTGREEN);
	bar(52, 0, 59, 5);
	bar(61, 0, 68, 5);
	bar(55, 4, 58, 13);
	bar(64, 4, 67, 13);
	bar(48, 12, 73, 41);
	setfillstyle(1, DARKGRAY);
	bar(52, 0, 56, 3);
	bar(61, 0, 65, 3);
	setfillstyle(1, YELLOW);
	bar(48, 23, 63, 41);
	setfillstyle(1, LIGHTRED);
	bar(50, 29, 58, 41);
	int size = imagesize(41, 1, 80, 40);
	char *pL = (char*)malloc(size);
	getimage(41, 1, 80, 40, pL);
	return pL;
}

char* drawPlayerUp() {
	setfillstyle(1, LIGHTGREEN);
	bar(92, 0, 99, 5);
	bar(102, 0, 109, 5);
	bar(94, 4, 97, 13);
	bar(104, 4, 107, 13);
	bar(88, 12, 113, 41);
	setcolor(DARKGRAY);
	line(94, 1, 97, 1);
	line(104, 1, 107, 1);
	int size = imagesize(81, 1, 120, 40);
	char *pU = (char*)malloc(size);
	getimage(81, 1, 120, 40, pU);
	return pU;
}

char* drawPlayerDown() {
	setfillstyle(1, LIGHTGREEN);
	bar(132, 0, 139, 5);
	bar(142, 0, 149, 5);
	bar(134, 4, 137, 13);
	bar(144, 4, 147, 13);
	bar(128, 12, 153, 41);
	setfillstyle(1, DARKGRAY);
	bar(133, 0, 138, 3);
	bar(143, 0, 148, 3);
	setfillstyle(1, YELLOW);
	bar(132, 21, 149, 41);
	setfillstyle(1, LIGHTRED);
	bar(136, 29, 145, 41);
	int size = imagesize(121, 1, 160, 40);
	char *pD = (char*)malloc(size);
	getimage(121, 1, 160, 40, pD);
	return pD;
}

char* drawEnemyRight() {
	setfillstyle(1, GREEN);
	bar(12, 80, 19, 87);
	bar(22, 80, 29, 87);
	bar(10, 86, 31, 121);
	bar(8, 89, 11, 121);
	bar(30, 91, 41, 96);
	bar(30, 89, 33, 92);
	bar(30, 103, 41, 107);
	bar(30, 106, 33, 121);
	setfillstyle(1, DARKGRAY);
	bar(14, 80, 19, 85);
	bar(24, 80, 29, 85);
	setcolor(LIGHTGRAY);
	line(20, 110, 32, 110);
	line(20, 113, 32, 113);
	line(20, 116, 32, 116);
	line(20, 119, 32, 119);
	putpixel(32, 96, GREEN);	putpixel(36, 96, GREEN);	putpixel(40, 96, GREEN);	
	putpixel(34, 96, GREEN);	putpixel(38, 96, GREEN);
	putpixel(31, 102, GREEN);	putpixel(33, 102, GREEN);	putpixel(35, 102, GREEN);
	putpixel(37, 102, GREEN);	putpixel(39, 102, GREEN);
	int size = imagesize(1, 81, 40, 120);
	char *eR = (char*)malloc(size);
	getimage(1, 81, 40, 120, eR);
	return eR;
}

char* drawEnemyLeft() {
	setfillstyle(1, GREEN);
	bar(92, 80, 99, 87);
	bar(102, 80, 109, 87);
	bar(90, 86, 111, 121);
	bar(110, 89, 113, 121);
	bar(88, 89, 91, 96);
	bar(88, 102, 91, 121);
	bar(80, 91, 89, 96);
	bar(80, 103, 89, 107);
	setfillstyle(1, DARKGRAY);
	bar(92, 80, 97, 85);
	bar(102, 80, 107, 85);
	setcolor(LIGHTGRAY);
	line(89, 110, 101, 110);
	line(89, 113, 101, 113);
	line(89, 116, 101, 116);
	line(89, 119, 101, 119);
	putpixel(81, 96, GREEN);	putpixel(83, 96, GREEN);	putpixel(85, 96, GREEN);
	putpixel(87, 96, GREEN);	putpixel(89, 96, GREEN);
	putpixel(82, 102, GREEN);	putpixel(84, 102, GREEN);	putpixel(86, 102, GREEN);
	putpixel(88, 102, GREEN);	putpixel(90, 102, GREEN);
	int size = imagesize(81, 81, 120, 120);
	char *eL = (char*)malloc(size);
	getimage(81, 81, 120, 120, eL);
	return eL;
}

char* drawBossLeft() {
	setfillstyle(1, GREEN);
	bar(3, 229, 81, 241);	bar(8, 223, 79, 230);
	bar(14, 219, 78, 224);	bar(18, 214, 76, 221);
	bar(18, 202, 72, 215);	bar(19, 185, 71, 191);
	bar(19, 190, 74, 196);	bar(4, 195, 77, 200);
	bar(4, 199, 79, 203);	bar(26, 160, 57, 166);
	bar(4, 182, 77, 185);	bar(4, 177, 75, 183);
	bar(19, 171, 71, 178);	bar(19, 165, 65, 172);
	bar(4, 184, 7, 187);	bar(8, 184, 11, 187);
	bar(12, 184, 15, 187);	bar(16, 184, 19, 187);
	bar(6, 193, 9, 196);	bar(10, 193, 13, 196);
	bar(14, 193, 17, 196);
	setfillstyle(1, LIGHTGRAY);
	bar(6, 232, 48, 241);	bar(10, 225, 44, 233);
	bar(16, 221, 38, 226);	bar(20, 214, 34, 222);
	setfillstyle(1, DARKGRAY);
	bar(30, 169, 40, 177);	bar(27, 173, 31, 177);
	bar(39, 169, 43, 173);
	int size = imagesize(1, 161, 80, 240);
	char *bol = (char*)malloc(size);
	getimage(1, 161, 80, 240, bol);
	return bol;
}

char* drawBossRight() {
	setfillstyle(1, GREEN);
	bar(80, 229, 158, 241);		bar(82, 223, 152, 232);
	bar(83, 219, 144, 224);		bar(85, 214, 140, 220);
	bar(88, 202, 140, 215);		bar(84, 196, 157, 203);
	bar(90, 185, 140, 197);		bar(87, 177, 157, 186);
	bar(95, 166, 140, 178);		bar(100, 160, 130, 167);
	int size = imagesize(81, 161, 160, 240);
	char *bor = (char*)malloc(size);
	getimage(81, 161, 160, 240, bor);
	return bor;
}

char* drawBulletLeft() {
	setcolor(BLUE);
	line(63, 121, 75, 121);
	line(62, 122, 74, 122);
	line(61, 123, 73, 123);
	line(62, 124, 74, 124);
	line(63, 125, 75, 125);
	int size = imagesize(61, 121, 75, 125);
	char *bL = (char*)malloc(size);
	getimage(61, 121, 75, 125, bL);
	return bL;
}

char* drawBulletRight() {
	setcolor(BLUE);
	line(41, 121, 53, 121);
	line(42, 122, 54, 122);
	line(43, 123, 55, 123);
	line(42, 124, 54, 124);
	line(41, 125, 53, 125);
	int size = imagesize(41, 121, 55, 125);
	char *bR = (char*)malloc(size);
	getimage(41, 121, 55, 125, bR);
	return bR;
}

char* drawBulletUp() {
	setcolor(BLUE);
	line(41, 133, 41, 145);
	line(42, 132, 42, 144);
	line(43, 131, 43, 143);
	line(44, 132, 44, 144);
	line(45, 133, 45, 145);
	int size = imagesize(41, 131, 45, 145);
	char *bU = (char*)malloc(size);
	getimage(41, 131, 45, 145, bU);
	return bU;
}

char* drawBulletDown() {
	setcolor(BLUE);
	line(51, 131, 51, 143);
	line(52, 132, 52, 144);
	line(53, 133, 53, 145);
	line(54, 132, 54, 144);
	line(55, 131, 55, 143);
	int size = imagesize(51, 131, 55, 145);
	char *bD = (char*)malloc(size);
	getimage(51, 131, 55, 145, bD);
	return bD;
}

// Cau truc chi so cua cac doi tuong
struct player {
	int isAlive;
	int x, y, xg, yg;
	char moving;
	char *shape;
};

struct enemy {
	int isExist;
	int x, y, xg, yg;
	int hp, speed;
	char moving;
	char *shape;
};

struct bullet {
	int isExist;
	int x, y;
	char moving;
	char *shape;
};

struct boss {
	int isExist;
	int x, y, xg, yg;
	int hit;
	char moving;
	char *shape;
	struct enemy eb[5];
};

int main() {
	initwindow(1320, 720);	// Khoi tao man hinh
	
	// Khoi tao con tro chua hinh dang cua cac vat the
	char *pL, *pR, *pU, *pD;
	
	pL = drawPlayerLeft();
	pR = drawPlayerRight();
	pU = drawPlayerUp();
	pD = drawPlayerDown();
	
	char *eL, *eR;
	eL = drawEnemyLeft();
	eR = drawEnemyRight();
	
	char *bL, *bR, *bU, *bD;
	bL = drawBulletLeft();
	bR = drawBulletRight();
	bU = drawBulletUp();
	bD = drawBulletDown();
	
	char *bol, *bor;
	bol = drawBossLeft();
	bor = drawBossRight();
	
	cleardevice();
	
	REPLAY:
	
	int i, j, score = 0;
	long long loopCount = 1;
	int spawnCount = 25;
	char c;
	int spawnDirect, baseHP = 1, enemySpeed = 3, chaseMode;	// Cac bien su dung trong tinh toan cua ke dich
	
	struct player p;	// Khoi tao nhan vat
	p.isAlive = 1;
	p.x = 640;
	p.y = 360;
	p.xg = p.x;
	p.yg = p.y;
	p.moving = 'n';
	p.shape = pD;
	
	struct bullet b[10];	// Khoi tao mang cau truc cua dan dao
	for(i=0; i<10; i++) {
		b[i].isExist = 0;
		b[i].moving = 'n';
	}
	
	struct enemy e[10];	// Khoi tao mang cau truc cua ke dich
	for(i=0; i<10; i++) {
		e[i].isExist = 0;
		e[i].moving = 'n';
	}
	
	struct boss bo;
	bo.isExist = 0;
	bo.moving = 'n';
	
	do {
		// In cac doi tuong
		putimage(p.x, p.y, p.shape, 0);
		for(i=0; i<5; i++) {
			if(b[i].isExist) {	// Kiem tra doi tuong da ton tai truoc khi in
				putimage(b[i].x, b[i].y, b[i].shape, 0);
			}
		}
		for(i=0; i<10; i++) {
			if(e[i].isExist) {
				putimage(e[i].x, e[i].y, e[i].shape, 0);
			}
		}
		if(bo.isExist) {
			putimage(bo.x, bo.y, bo.shape, 0);
		}
		delay(25);
		
		if(p.x == p.xg && p.y == p.yg) {	// Kiem tra nguoi choi hoan thanh qua trinh di chuyen nhap tu mot phim
			p.moving = 'n';
		} else {
			switch(p.moving) {	// Neu chua hoan thanh thi thuc hien di chuyen theo trang thai di chuyen
				case 'l':
					p.x -= 10;
					p.shape = pL;
					break;
				case 'r':
					p.x += 10;
					p.shape = pR;
					break;
				case 'u':
					p.y -= 10;
					p.shape = pU;
					break;
				case 'd':
					p.y += 10;
					p.shape = pD;
					break;
			}
		}
		
		if(loopCount%spawnCount == 0) {
			for(i=0; i<10; i++) {
				if(e[i].isExist == 0) {		// Tim ke dich chua ton tai de thuc hien spawn
					e[i].isExist = 1;
					e[i].moving = 'n';
					e[i].hp = baseHP;
					e[i].speed = enemySpeed;
					spawnDirect = rand()%4;	// Huong spawn duoc tao ngau nhien
					switch(spawnDirect) {
						case 0:
							e[i].x = rand()%34 * 40;	// Toa do spawn theo moi huong duoc tao ngau nhien
							e[i].y = -40;
							break;
						case 1:
							e[i].x = -40;
							e[i].y = rand()%19 * 40;
							break;
						case 2:
							e[i].x = 1320;
							e[i].y = rand()%19 * 40;
							break;
						case 3:
							e[i].x = rand()%34 * 40;
							e[i].y = 720;
							break;
					}
					break;
				}
			}
		}
		
		for(i=0; i<10; i++) {	// Tinh toan di chuyen cua ke dich
			if(e[i].isExist && e[i].moving == 'n') {	// Thay doi hinh dang theo vi tri
				if(e[i].x >= p.x) {
					e[i].shape = eL;
				} else {
					e[i].shape = eR;
				}
				if(e[i].x != p.x && e[i].y != p.y) {
					chaseMode = rand()%2;	// Huong truy duoi duoc tao ngau nhien
					if(chaseMode) {
						if(e[i].y > p.y) {
							e[i].moving = 'u';
							e[i].xg = e[i].x;
							e[i].yg = e[i].y - 40;
						} else {
							e[i].moving = 'd';
							e[i].xg = e[i].x;
							e[i].yg = e[i].y + 40;
						}
					} else {
						if(e[i].x > p.x) {
							e[i].moving = 'l';
							e[i].xg = e[i].x - 40;
							e[i].yg = e[i].y;
						} else {
							e[i].moving = 'r';
							e[i].xg = e[i].x + 40;
							e[i].yg = e[i].y;
						}
					}
				} else if(e[i].x != p.x) {
					if(e[i].x > p.x) {
						e[i].moving = 'l';
						e[i].xg = e[i].x - 40;
						e[i].yg = e[i].y;
					} else {
						e[i].moving = 'r';
						e[i].xg = e[i].x + 40;
						e[i].yg = e[i].y;
					}
				} else if(e[i].y != p.y) {
					if(e[i].y > p.y) {
						e[i].moving = 'u';
						e[i].xg = e[i].x;
						e[i].yg = e[i].y - 40;
					} else {
						e[i].moving = 'd';
						e[i].xg = e[i].x;
						e[i].yg = e[i].y + 40;
					}
				}
			}
		}
		
		for(i=0; i<10; i++) {	// Di chuyen ke dich
			if(e[i].isExist) {
				if(e[i].xg == e[i].x && e[i].yg == e[i].y) {
					e[i].moving = 'n';
				} else if(abs(e[i].x - e[i].xg) < e[i].speed && abs(e[i].y - e[i].yg) < e[i].speed) {
					e[i].x = e[i].xg;
					e[i].y = e[i].yg;
				} else {
					switch(e[i].moving) {
						case 'l':
							e[i].x -= e[i].speed;
							break;
						case 'r':
							e[i].x += e[i].speed;
							break;
						case 'u':
							e[i].y -= e[i].speed;
							break;
						case 'd':
							e[i].y += e[i].speed;
							break;
					}
				}
			}
		}
		
		for(i=0; i<5; i++) {	// Kiem tra va cham dan dao va ke dich
			if(b[i].isExist) {
				for(j=0; j<10; j++) {
					if(b[i].isExist && e[j].isExist) {
						switch(b[i].moving) {	// Toa do duoc coi la co va cham tuy thuoc theo huong dan
							case 'l': case 'r':
								if(b[i].x - e[j].x >= -10 && b[i].x - e[j].x <= 35
								&& b[i].y - e[j].y >= 5 && b[i].y - e[j].y <= 30) {
									b[i].isExist = 0;
									e[j].hp--;
									if(e[j].hp == 0) {
										e[j].moving = 'n';
										e[j].isExist = 0;
									}
									break;
								}
								break;
							case 'u': case 'd':
								if(b[i].x - e[j].x >= 5 && b[i].x - e[j].x <= 30
								&& b[i].y - e[j].y >= -10 && b[i].y - e[j].y <= 35) {
									b[i].isExist = 0;
									e[j].hp--;
									if(e[j].hp == 0) {
										e[j].isExist = 0;
										score += 3;
									}
									break;
								}
								break;
						}
					}
				}
			}
		}
		
		if(loopCount%1000 == 0) {
			if(!bo.isExist) {
				bo.isExist = 1;
				bo.hit = 0;
//				for(i=0; i<5; i++) {
//					bo.eb[i].isExist = 0;
//					bo.eb[i].moving = 'n';
//				}
				spawnDirect = rand()%4;	// Huong spawn duoc tao ngau nhien
				switch(spawnDirect) {
					case 0:
						bo.x = rand()%34 * 40;	// Toa do spawn theo moi huong duoc tao ngau nhien
						bo.y = -80;
						break;
					case 1:
						bo.x = -80;
						bo.y = rand()%19 * 40;
						break;
					case 2:
						bo.x = 1360;
						bo.y = rand()%19 * 40;
						break;
					case 3:
						bo.x = rand()%34 * 40;
						bo.y = 760;
						break;
				}
			}
		}
		
		if(bo.isExist) {
			if(bo.x > p.x) {
				bo.shape = bol;
			} else {
				bo.shape = bor;
			}
			if(bo.moving == 'n') {
				if(bo.x != p.x && bo.y != p.y) {
					chaseMode = rand()%2;	// Huong truy duoi duoc tao ngau nhien
					if(chaseMode) {
						if(bo.y > p.y) {
							bo.moving = 'u';
							bo.xg = bo.x;
							bo.yg = bo.y - 40;
						} else {
							bo.moving = 'd';
							bo.xg = bo.x;
							bo.yg = bo.y + 40;
						}
					} else {
						if(bo.x > p.x) {
							bo.moving = 'l';
							bo.xg = bo.x - 40;
							bo.yg = bo.y;
						} else {
							bo.moving = 'r';
							bo.xg = bo.x + 40;
							bo.yg = bo.y;
						}
					}
				} else if(bo.x != p.x) {
					if(bo.x > p.x) {
						bo.moving = 'l';
						bo.xg = bo.x - 40;
						bo.yg = bo.y;
					} else {
						bo.moving = 'r';
						bo.xg = bo.x + 40;
						bo.yg = bo.y;
					}
				} else if(bo.y != p.y) {
					if(bo.y > p.y) {
						bo.moving = 'u';
						bo.xg = bo.x;
						bo.yg = bo.y - 40;
					} else {
						bo.moving = 'd';
						bo.xg = bo.x;
						bo.yg = bo.y + 40;
					}
				}
			}
		}
		
		if(bo.isExist) {
			if(bo.x == bo.xg && bo.y == bo.yg) {
				bo.moving = 'n';
			} else {
				switch(bo.moving) {
					case 'l':
						bo.x -= 4;
						break;
					case 'r':
						bo.x += 4;
						break;
					case 'u':
						bo.y -= 4;
						break;
					case 'd':
						bo.y += 4;
						break;
				}
			}
		}
		
		if(bo.isExist) {
			for(i=0; i<5; i++) {
				if(b[i].isExist) {
					if(b[i].x - bo.x >= -10 && b[i].x - bo.x <= 75
					&& b[i].y - bo.y >= -10 && b[i].y - bo.y <= 75) {
						bo.hit++;
						b[i].isExist = 0;
					}
				}
			}
			if(bo.hit%3 == 0) {
				for(i=0; i<10; i++) {
					if(!e[i].isExist) {
						e[i].isExist = 1;
						e[i].moving = 'n';
						e[i].hp = baseHP;
						e[i].speed = enemySpeed;
						e[i].x = bo.x - 40;
						e[i].y = bo.y + 40;
						bo.hit++;
						break;
					}
				}
			}
			if(bo.hit > 15) {
				bo.isExist = 0;
				bo.moving = 'n';
				score += 20;
			}
		}
		
		for(i=0; i<5; i++) {	// Thuc hien di chuyen dan dao
			if(b[i].isExist) {	// Kiem tra dan dao ton tai
				if(b[i].x <= -14 || b[i].x >= 1319 || b[i].y <= -14 || b[i].y >= 719) {	// Kiem tra dan dao ra ngoai man hinh
					b[i].isExist = 0;
				} else {
					switch(b[i].moving) {	// Neu dan dao da ton tai va chua ra khoi man hinh thi thuc hien di chuyen
					case 'l':
						b[i].x -= 15;
						break;
					case 'r':
						b[i].x += 15;
						break;
					case 'u':
						b[i].y -= 15;
						break;
					case 'd':
						b[i].y += 15;
						break;
					}
				}
			}
		}
		
		for(i=0; i<10; i++) {	// Kiem tra va cham ke dich va nguoi choi
			if(e[i].isExist) {
				if(e[i].x - p.x >= -30 && e[i].x - p.x <= 30 &&
				   e[i].y - p.y >= -30 && e[i].y - p.y <= 30) {
				   	p.isAlive = 0;
				   }
			}
		}
		if(bo.isExist) {
			if(bo.x - p.x >= -70 && bo.x - p.x <= 30 &&
			   bo.y - p.y >= -70 && bo.y - p.y <= 30) {
			   	p.isAlive = 0;
			   }
		}
		
		if(kbhit()) {	// Kiem tra co tin hieu nhap tu ban phim
			c = getch();
			switch(c) {	// Tinh toan tuy theo phim duoc nhap
				// Cac truong hop lenh di chuyen
				case 'a':
					if(p.moving == 'n') {
						p.xg = p.x - 40;
						p.moving = 'l';
					}
					break;
				case 'd':
					if(p.moving == 'n') {
						p.xg = p.x + 40;
						p.moving = 'r';
					}
					break;
				case 'w':
					if(p.moving == 'n') {
						p.yg = p.y - 40;
						p.moving = 'u';
					}
					break;
				case 's':
					if(p.moving == 'n') {
						p.yg = p.y + 40;
						p.moving = 'd';
					}
					break;
				// Cac truong hop lenh tan cong
				case 'j':
					for(i=0; i<5; i++) {
						if(b[i].isExist == 0) {
							b[i].isExist = 1;
							b[i].shape = bL;
							b[i].x = p.x - 15;
							b[i].y = p.y + 28;
							b[i].moving = 'l';
							p.shape = pL;
							break;
						}
					}
					break;
				case 'l':
					for(i=0; i<5; i++) {
						if(b[i].isExist == 0) {
							b[i].isExist = 1;
							b[i].shape = bR;
							b[i].x = p.x + 40;
							b[i].y = p.y + 28;
							b[i].moving = 'r';
							p.shape = pR;
							break;
						}
					}
					break;
				case 'i':
					for(i=0; i<5; i++) {
						if(b[i].isExist == 0) {
							b[i].isExist = 1;
							b[i].shape = bU;
							b[i].x = p.x + 17;
							b[i].y = p.y - 15;
							b[i].moving = 'u';
							p.shape = pU;
							break;
						}
					}
					break;
				case 'k':
					for(i=0; i<5; i++) {
						if(b[i].isExist == 0) {
							b[i].isExist = 1;
							b[i].shape = bD;
							b[i].x = p.x + 17;
							b[i].y = p.y + 40;
							b[i].moving = 'd';
							p.shape = pD;
							break;
						}
					}
					break;
			}
		}
		
		if(loopCount%20 == 0) {
			score++;
		}
		if(loopCount%1000 == 0) {
			spawnCount -= 3;
			enemySpeed++;
		}

		loopCount++;
		cleardevice();
	} while(p.isAlive && c != 'p');
	
	char s[10];
	char kt[40] = "Diem cua ban la ";
	itoa(score, s, 10);
	strcat(kt, s);
	settextstyle(0, 0, 6);
	outtextxy(250, 200, kt);
	settextstyle(0, 0, 3);
	char hd[40] = "Nhan p de thoat, r de choi lai";
	outtextxy(300, 350, hd);
	
	END:
	c = getch();
	if(c == 'p') {
		return 0;
	} else if(c == 'r') {
		goto REPLAY;
	} else {
		goto END;
	}
	
	return 0;
}
