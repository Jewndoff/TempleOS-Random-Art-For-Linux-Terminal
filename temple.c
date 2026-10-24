#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define RESET "\033[0m"   //reset color
#define YELLOW "\033[93m" //yellow
#define BLUE "\033[94m"   //blue
#define WHITE "\033[37m"  //white
#define RED "\033[31m"    //red
int main(){
srand(time(NULL));
int version=rand() % 6;
if(version==0){ //TempleOS
  printf("\n");
  printf(BLUE"^^^8^^^""                              "YELLOW"8^^^88 8^^^^8\n");
  printf(BLUE"   8   eeee eeeeeee eeeee e     eeee "YELLOW"8    8 8      \n");
  printf(BLUE"   8e  8    8  8  8 8   8 8     8    "YELLOW"8    8 8eeeee \n");
  printf(BLUE"   88  8eee 8e 8  8 8eee8 8e    8eee "YELLOW"8    8     88 \n");
  printf(BLUE"   88  88   8e 8  8 88    88    88   "YELLOW"8    8 e   88 \n");
  printf(BLUE"   88  88ee 8e 8  8 88    88eee 88ee "YELLOW"8eeee8 8eee88 \n"RESET);
  printf("\n"); }
if(version==1){ //Holy C
  printf(YELLOW"              ███              "WHITE"          \n");
  printf(YELLOW" █    █          █              "WHITE"     ░███▒\n");
  printf(YELLOW" █    █          █              "WHITE"    ░█▒ ░█\n");
  printf(YELLOW" █    █  ███     █    █░  █     "WHITE"    █▒    \n");
  printf(YELLOW" █    █ █▓ ▓█    █    ▓▒ ▒▓     "WHITE"    █     \n");
  printf(YELLOW" ██████ █   █    █    ▒█ █▒     "WHITE"    █     \n");
  printf(YELLOW" █    █ █   █    █     █ █      "WHITE"    █     \n");
  printf(YELLOW" █    █ █   █    █     █▓▓      "WHITE"    █▒    \n");
  printf(YELLOW" █    █ █▓ ▓█    █░    ▓█▒      "WHITE"    ░█▒ ░▓\n");
  printf(YELLOW" █    █  ███     ▒██   ▒█       "WHITE"     ▒███▒\n");
  printf(YELLOW"                       ▒█                 \n");
  printf("                       █▒                 \n");
  printf("                      ██                  \n"RESET);
  printf("\n");}
if(version==2){ //1969-2018
  printf("\n");
  printf(BLUE"  _____ _______ _______ _______        "RED"_______ _______ _____ _______    \n"RESET);
  printf(BLUE" | _   |   _   |   _   |   _   |"WHITE"______"RED"|       |   _   | _   |   _   |   \n");
  printf(BLUE" |.|   |   |   |   1___|   |   |"WHITE"______"RED"|___|   |.  |   |.|   |.  |   |   \n");
  printf(BLUE" `-|.  |\\___   |.     \\ \\___   |       "RED"/  ___/|.  |   `-|.  |.  _   |   \n");
  printf(BLUE"   |:  |:  1   |:  1   |:  1   |      "RED"|:  1  \\|:  1   | |:  |:  1   |   \n");
  printf(BLUE"   |::.|::.. . |::.. . |::.. . |     "RED" |::.. . |::.. . | |::.|::.. . |   \n");
  printf(BLUE"   `---`-------`-------`-------'      "RED"`-------`-------' `---`-------'   \n"RESET);
  printf("\n");}
if(version==3){ //Terry A. Davis
  printf("\n");
  printf(BLUE"88888888888                                            d8888          8888888b.                    d8b          \n");
  printf(BLUE"    888                                               d88888          888  \"Y88b                   Y8P          \n");
  printf(BLUE"    888                                              d88P888          888    888                                \n");
  printf(BLUE"    888   .d88b.  888d888 888d888 888  888          d88P 888          888    888  8888b.  888  888 888 .d8888b  \n");
  printf(BLUE"    888  d8P  Y8b 888P\"   888P\"   888  888         d88P  888          888    888     \"88b 888  888 888 88K      \n");
  printf(BLUE"    888  88888888 888     888     888  888        d88P   888          888    888 .d888888 Y88  88P 888 \"Y8888b. \n");
  printf(BLUE"    888  Y8b.     888     888     Y88b 888       d8888888888 d8b      888  .d88P 888  888  Y8bd8P  888      X88 \n");
  printf(BLUE"    888   \"Y8888  888     888      \"Y88888      d88P     888 Y8P      8888888P\"  \"Y888888   Y88P   888  88888P\' \n");
  printf(BLUE"                                       888                                                                      \n");
  printf(BLUE"                                  Y8b d88P                                                                      \n");
  printf(BLUE"                                   \"Y88P\"                                                                       \n"RESET);
  printf("\n");
}
if(version==4){ // LoseThos
  printf("\n");
  printf(WHITE"      888                                "RED"~~~888~~~ 888                      \n");
  printf(WHITE"      888      e88~-_   d88~\\  e88~~8e   "RED"   888    888-~88e  e88~-_   d88~\\\n");
  printf(WHITE"      888     d888   i C888   d888  88b   "RED"  888    888  888 d888   i C888   \n");
  printf(WHITE"      888     8888   |  Y88b  8888__888   "RED"  888    888  888 8888   |  Y88b  \n");
  printf(WHITE"      888     Y888   '   888D Y888    ,   "RED"  888    888  888 Y888   '   888D \n");
  printf(WHITE"      888____  \"88_-~  \\_88P   \"88___/ "RED"     888    888  888  \"88_-~ \\_88P  \n"RESET);
  printf("\n");}
if(version==5){  //SparrowOS
  printf("\n");
  printf(BLUE"  ____                                      ___  ____   \n");
  printf(BLUE" / ___| _ __   __ _ _ __ _ __ _____      __/ _ \\/ ___|  \n");
  printf(BLUE" \\___ \\| '_ \\ / _` | '__| '__/ _ \\ \\ /\\ / / | | \\___ \\  \n");
  printf(BLUE"  ___) | |_) | (_| | |  | | | (_) \\ V  V /| |_| |___) | \n");
  printf(BLUE" |____/| .__/ \\__,_|_|  |_|  \\___/ \\_/\\_/  \\___/|____/  \n");
  printf(BLUE"       |_|                                              \n"RESET);
  printf("\n");}
  return 0;
}
