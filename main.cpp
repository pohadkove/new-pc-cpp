// main

#include <iostream>
#include<string>
#include <windows.h>

using namespace std;

int main() {
//steam
 string steam = "https://cdn.cloudflare.steamstatic.com/client/installer/SteamSetup.exe";
    ShellExecuteA(NULL, "open", steam.c_str(), NULL, NULL, SW_SHOWNORMAL);
//epic
 string epic = "https://launcher-public-service-prod06.ol.epicgames.com/launcher/api/installer/download/EpicGamesLauncherInstaller.msi";
    ShellExecuteA(NULL, "open", epic.c_str(), NULL, NULL, SW_SHOWNORMAL);
//7zip
string sevenzip = "https://www.7-zip.org/a/7z2201-x64.exe";
    ShellExecuteA(NULL, "open", sevenzip.c_str(), NULL, NULL, SW_SHOWNORMAL);
    //notepad++
string notepad = "https://github.com/notepad-plus-plus/notepad-plus-plus/releases/download/v8.4.6/npp.8.4.6.Installer.x64.exe";
    ShellExecuteA(NULL, "open", notepad.c_str(), NULL, NULL, SW_SHOWNORMAL);
    //GOG
string gog = "https://webinstallers.gog-statics.com/download/GOG_Galaxy_2.0.exe?payload=JImkSlHOzmzsxFFiipYeeX8u_guh6io4OQUETSIER35sfrsQsgZHjov_B9ngF2LoZ-YZwtFPfvriTQPtieDVeDKwxmcTX7e80Ct_kA0P2bFv36Riio3ha8jATb9nKerUZAd-9B9f0FD8MGzK7GoMhee_CKfV0ySIWHiDBcNsy1avq_6SOkMo9MchG4HHuo1nLE_LrmMYWJCQI9jWMy3AmTpOff5DRug0XLKZMV4gZA5FPuzXJ-rXrk-23NORvZXYg-xa98mePRkW-Jgf48mfTi-NnESH_EEwmsH5HGxk0D-7DqXfsg-L9Om0qCkodDZ8rh333e_YFTktb-0NAtyTmv7-HpvLtyJOEPz8ar0EmHwuxKT92OSzATJLYvPaNCyuTLXawh2-sBZ_tnJeZoLa39joBxSRf8Uemt8erTi9d49xiAgjEsKZG51z9rL06-WxzAWMGUWoeqDAesbrfMntZavXaoZiPdyb-zCsA2AM6MLygO8cxATpp2-T70cwdCmzvRSpHMnpELPuysXpXq8UOhwNZratlRDH4z4oJ8Onx6MkPMKOIZQGkPPqfp5QnVepCvGZbbDvhkcCbsUidlgjj5MZjwMq--Gr-KdHlpVd9JQ4yAaVmn7kmjRQaiwngxk66Yg0TQRKOCZ0H077Nz_r1Xed3PwtykLfTUaAjAl1QjJLy87_1iuo3T0YK39yxijXO2RhbqR_HTFlt3pf51esi93A49B8oVp8LMom9WqhLfc1foOpEJmYSGcsY2JyRNDKIjYAweNB";
    ShellExecuteA(NULL, "open", gog.c_str(), NULL, NULL, SW_SHOWNORMAL);
    //Discord
string discord = "https://discord.com/api/downloads/distributions/app/installers/latest?channel=stable&platform=win&arch=x86";
    ShellExecuteA(NULL, "open", discord.c_str(), NULL, NULL, SW_SHOWNORMAL);
    //curseforge
string curseforge = "https://download.overwolf.com/install/Download?&PartnerId=4047";
    ShellExecuteA(NULL, "open", curseforge.c_str(), NULL, NULL, SW_SHOWNORMAL);
    //success
     system("Color 0A");
     cout << "success!";
    return 0;

}