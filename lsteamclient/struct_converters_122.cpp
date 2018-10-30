#include "steamclient_private.h"
#include "steam_defs.h"
#include "steamworks_sdk_122/steam_api.h"
#include "steamworks_sdk_122/isteamgameserver.h"
#include "steamworks_sdk_122/isteamgameserverstats.h"
#include "steamworks_sdk_122/isteamgamecoordinator.h"
extern "C" {
#pragma pack( push, 8 )
struct winRemoteStorageSubscribePublishedFileResult_t_4 {
    EResult m_eResult;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RemoteStorageSubscribePublishedFileResult_t_4(const void *l, void *w)
{
    RemoteStorageSubscribePublishedFileResult_t *lin = (RemoteStorageSubscribePublishedFileResult_t *)l;
    struct winRemoteStorageSubscribePublishedFileResult_t_4 *win = (struct winRemoteStorageSubscribePublishedFileResult_t_4 *)w;
    win->m_eResult = lin->m_eResult;
}

#pragma pack( push, 8 )
struct winRemoteStorageUnsubscribePublishedFileResult_t_4 {
    EResult m_eResult;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RemoteStorageUnsubscribePublishedFileResult_t_4(const void *l, void *w)
{
    RemoteStorageUnsubscribePublishedFileResult_t *lin = (RemoteStorageUnsubscribePublishedFileResult_t *)l;
    struct winRemoteStorageUnsubscribePublishedFileResult_t_4 *win = (struct winRemoteStorageUnsubscribePublishedFileResult_t_4 *)w;
    win->m_eResult = lin->m_eResult;
}

#pragma pack( push, 8 )
struct winLeaderboardEntry_t_122 {
    CSteamID m_steamIDUser;
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_LeaderboardEntry_t_122(const void *w, void *l)
{
    LeaderboardEntry_t *lin = (LeaderboardEntry_t *)l;
    struct winLeaderboardEntry_t_122 *win = (struct winLeaderboardEntry_t_122 *)w;
    lin->m_steamIDUser = win->m_steamIDUser;
    lin->m_nGlobalRank = win->m_nGlobalRank;
    lin->m_nScore = win->m_nScore;
    lin->m_cDetails = win->m_cDetails;
    lin->m_hUGC = win->m_hUGC;
}

void lin_to_win_struct_LeaderboardEntry_t_122(const void *l, void *w)
{
    LeaderboardEntry_t *lin = (LeaderboardEntry_t *)l;
    struct winLeaderboardEntry_t_122 *win = (struct winLeaderboardEntry_t_122 *)w;
    win->m_steamIDUser = lin->m_steamIDUser;
    win->m_nGlobalRank = lin->m_nGlobalRank;
    win->m_nScore = lin->m_nScore;
    win->m_cDetails = lin->m_cDetails;
    win->m_hUGC = lin->m_hUGC;
}


}
