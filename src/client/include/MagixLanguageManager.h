#ifndef __MagixLanguageManager_h_
#define __MagixLanguageManager_h_

#include "MagixNetworkDefines.h"
#include "GameConfig.h"

using namespace Ogre;

class MagixLanguageManager
{
protected:
	String vNewGame;
	String vMultiplayer;
	String vAbout;
	String vQuit;
	String vUpdate;
	String vBack;
	String vForum;
	String vVK;
	String vCredit;
	String vUsername;
	String vUsername2;
	String vPassword;
	String vLogin;
	String vNewAccount;
	String vChangePass;
	String vCreateNewAcc;
	String vConfirmPass;
	String vEmail;
	String vQuestion;
	String vAnswer;
	String vOldPass;
	String vNewPass;
	String vConfirm;
	String vConnecting;
	String vNext;
	String vEdit;
	String vNew;
	String vStart;
	String vEditCharacter;
	String vDelete;
	String vFinish;
	String vSize;
	String vMustNotInc;
	String vEntName;
	String vMustNotSpace;
	String vName;
	String vPelt;
	String vUnderfur;
	String vMane;
	String vNose;
	String vAboveEyes;
	String vBelowEyes;
	String vEars;
	String vTailtip;
	String vEyes;
	String vWings;
	String vMarkings;
	String vLoading;
	String vResume;
	String vSettings;
	String vInterface;
	String vOff;
	String vOn;
	String vCharacter;
	String vAbsolute;
	String vRelative;
	String vRestart;
	String vCreating;
	String vSaving;
	String vMusic;
	String vGUISound;
	String vSound;
	String vShadows;
	String vBloom;
	String vGeometry;
	String vDistance;
	String vTablet;
	String vSensitivity;
	String vGeneralName;
	String vLocalName;
	String vChButtonBlink;
	String vRunMode;
	String vDoubleJump;
	String vLipSync;
	String vWindowCursor;
	String vLanguage;
	String vClickHere;
	String vShow;
	String vHide;
	String vSay;
	String vSay2;
	String vSend;
	String vLocal;
	String vParty;
	String vGeneral;
	String vAttack;
	String vEquip;
	String vPet;
	String vHomeHead;
	String vBioHead;
	String vFriendsHead;
	String vItemsHead;
	String vExpressionsHead;
	String vPartyHead;
	String vStashHead;
	String vSetHome;
	String vGoHome;
	String vResetHome;
	String vDim;
	String vChange;
	String vNone;
	String vOnlineFriends;
	String vOfflineFriends;
	String vOnlinePlayers;
	String vBlockedList;
	String vStash;
	String vHomeCmd;
	String vFriendCmd;
	String vPetCmd;
	String vOtherCmd;
	String vNm;
	String vMsg;
	String vFilname;
	String vMap;
	String vNDays;
	String vLResort;
	String vPlayertoken;
	String vNoHearYou;
	String vMDims;
	String vFollow;
	String vStay;
	String vGrow;
	String vShrink;
	String vDevolve;
	String vEvolve;
	String vPraise;
	String vDraw;
	String vViewBio;
	String vUnblock;
	String vBlock;
	String vRemoveFr;
	String vAddFr;
	String vInviteP;
	String vJoinP;
	String vCannotAttack;
	String vTargetNeed;
	String vScreenSaved;
	String vTabletOn;
	String vTabletOff;
	String vTakenEffects;
	String vTakenCorrectEffects;
	String vAdded;
	String vRemoved;
	String vAsFriend;
	String vTo;
	String vFrom;
	String vEnterUsername;
	String vEnterPassword;
	String vEnterPasswordConf;
	String vConfirmPasswordMiss;
	String vNotWithSpace;
	String vNotContain;
	String vEnterOldPwd;
	String vEnterNewPwd;
	String vEnterNewPwdConf;
	String vEnterConfPwdMiss;
	String vUsageRoll;
	String vMaxDice;
	String vRolled;
	String vOf;
	String vSideGot;
	String vCannotCreateItem;
	String vItemNotExist;
	String vSpawnedItem;
	String vCannotEquip;
	String vEquipped;
	String vPage;
	String vPartyFull;
	String vInviting;
	String vToJoin;
	String vIRequestingToJoin;
	String vSparty;
	String vUsageSaveChat;
	String vCannotFind;
	String vYouReleased;
	String vModModeOn;
	String vModModeOff;
	String vDropped;
	String vDeleted;
	String vFullStash;
	String vIsIn;
	String vDrop;
	String vHotkeyF;
	String vSetAs;
	String vRemove;
	String vWhere;
	String vPM;
	String vPartyCmd;
	String vBlockList;
	
	String vYouWonded;
	String vYouRecovered;
	// Handler
	String vSetToRecovered;
	String vResHome;
	String vPosIs;
	// OwnershipManager
	String vWoundPet;
	// CharScreenManager
	String vEntCharName;
	String vCharNMiss;
	// NetworkManager
	String vNoSrv;
	String vConnecte;
	String vBanned;
	String vDaysLeft;
	String vDasLeft;
	String vConnected;
	String vOurFail;
	String vPleaseLatest;
	String vUnavail;
	String vYouDisconnected;
	String vReconecting;
	String vDisconection;
	String vConnectionLostR;
	String vConnectionLost;
	String vConnectionLostS;
	String vReconnecte;
	String vCannotSend;
	String vSendTo;
	String vIsFriend;
	String vIsBlocked;
	String vHasArrived;
	String vErrNotice;
	String vSentErrors;
	String vDisconnected;
	String vTimedOut;
	String vHasLeft;
	String vEgg1;
	String vEgg2;
	String vEgg3;
	String vEgg4;
	String vEgg5;
	String vPMember;
	String vHasDisconnected;
	String vKickedAdmin;
	String vDisByUser;
	String vDisByAnother;
	String vHasJoinedP;
	String vHasLeftP;
	String vAlreadyInP;
	String vYouLeftP;
	String vYouHaveTamed;
	String vAn;
	String vA;
	String vHaveYouTamed;
	String vIsWonded;
	String vRecoverWound;
	String vMoved;
	String vIntoStash;
	String vDimension;
	String vIstOnline;
	String vSrvRestartingIn;
	String vPleaseLogOut;
	String vInvUoP;
	String vUserAlready;
	String vAccCreated;
	String vUserUse;
	String vPassChanged;
	String vPassChangeFail;
	String vCharLoadFail;
	String vCharEditFail;
	String vHass;
	String vInvYou;
	String vRquested;
	String vTJoinP;
	String vActions;
	String vPlopDown;
	String vLay;
	String vSit;
	String vRollOver;
	String vLayDown;
	String vSideLay;
	String vStopCrouch;
	String vPoint;
	String vStretch;
	String vHeadswing;
	String vHeadbang;
	String vButtswing;
	String vWingwave;
	String vMoonwalk;
	String vThriller;
	String vRofl;
	String vRoar;
	String vCurl;
	String vFaint;
	String vSecondaryAct;
	String vNodHead;
	String vShakeHead;
	String vSlowNodHead;
	String vShakeSlowHead;
	String vHeadTilt;
	String vLick;
	String vStopLick;
	String vNuzzle;
	String vStopNuzzle;
	String vSniff;
	String vTailFlick;
	String vLaugh;
	String vChuckle;
	String vEmotes;
	String vCrouch;
	String vLogSaved;
	std::string lang;
public:
	MagixLanguageManager()
	{
		vNewGame = "";
		vMultiplayer = "";
		vAbout = "";
		vQuit = "";
		vUpdate = "";
		vBack = "";
		vForum = "";
		vVK = "";
		vCredit = "";
		vUsername = "";
		vUsername2 = "";
		vPassword = "";
		vLogin = "";
		vNewAccount = "";
		vChangePass = "";
		vCreateNewAcc = "";
		vConfirmPass = "";
		vEmail = "";
		vQuestion = "";
		vAnswer = "";
		lang = "";
		vOldPass = "";
		vNewPass = "";
		vConfirm = "";
		vConnecting = "";
		vNext = "";
		vEdit = "";
		vNew = "";
		vStart = "";
		vEditCharacter = "";
		vDelete = "";
		vFinish = "";
		vSize = "";
		vMustNotInc = "";
		vEntName = "";
		vMustNotSpace = "";
		vName = "";
		vPelt = "";
		vUnderfur = "";
		vMane = "";
		vNose = "";
		vAboveEyes = "";
		vBelowEyes = "";
		vEars = "";
		vTailtip = "";
		vEyes = "";
		vWings = "";
		vMarkings = "";
		vLoading = "";
		vResume = "";
		vSettings = "";
		vInterface = "";
		vOff = "";
		vOn = "";
		vCharacter = "";
		vAbsolute = "";
		vRelative = "";
		vRestart = "";
		vCreating = "";
		vSaving = "";
		vMusic = "";
		vGUISound = "";
		vSound = "";
		vShadows = "";
		vBloom = "";
		vGeometry = "";
		vDistance = "";
		vTablet = "";
		vSensitivity = "";
		vGeneralName = "";
		vLocalName = "";
		vChButtonBlink = "";
		vRunMode = "";
		vDoubleJump = "";
		vLipSync = "";
		vWindowCursor = "";
		vLanguage = "";
		vClickHere = "";
		vShow = "";
		vHide = "";
		vSay = "";
		vSay2 = "";
		vSend = "";
		vLocal = "";
		vParty = "";
		vGeneral = "";
		vAttack = "";
		vEquip = "";
		vPet = "";
		vHomeHead = "";
		vBioHead = "";
		vFriendsHead = "";
		vItemsHead = "";
		vExpressionsHead = "";
		vPartyHead = "";
		vStashHead = "";
		vSetHome = "";
		vDim = "";
		vChange = "";
		vNone = "";
		vOnlineFriends = "";
		vOfflineFriends = "";
		vOnlinePlayers = "";
		vBlockedList = "";
		vStash = "";
		vHomeCmd = "";
		vHomeCmd = "";
		vFriendCmd = "";
		vPetCmd = "";
		vOtherCmd = "";
		vNm = "";
		vMsg = "";
		vFilname = "";
		vMap = "";
		vNDays = "";
		vLResort = "";
		vPlayertoken = "";
		vNoHearYou = "";
		vMDims = "";
		vFollow = "";
		vStay = "";
		vGrow = "";
		vShrink = "";
		vDevolve = "";
		vEvolve = "";
		vPraise = "";
		vDraw = "";
		vViewBio = "";
		vUnblock = "";
		vBlock = "";
		vRemoveFr = "";
		vAddFr = "";
		vInviteP = "";
		vJoinP = "";
		vCannotAttack = "";
		vTargetNeed = "";
		vScreenSaved = "";
		vTabletOn = "";
		vTabletOff = "";
		vTakenEffects = "";
		vTakenCorrectEffects = "";
		vAdded = "";
		vRemoved = "";
		vAsFriend = "";
		vTo = "";
		vFrom = "";
		vEnterUsername = "";
		vEnterPassword = "";
		vEnterPasswordConf = "";
		vConfirmPasswordMiss = "";
		vNotWithSpace = "";
		vNotContain = "";
		vEnterOldPwd = "";
		vEnterNewPwd = "";
		vEnterNewPwdConf = "";
		vEnterConfPwdMiss = "";
		vUsageRoll = "";
		vMaxDice = "";
		vRolled = "";
		vOf = "";
		vSideGot = "";
		vCannotCreateItem = "";
		vItemNotExist = "";
		vSpawnedItem = "";
		vCannotEquip = "";
		vEquipped = "";
		vPage = "";
		vPartyFull = "";
		vInviting = "";
		vToJoin = "";
		vIRequestingToJoin = "";
		vSparty = "";
		vUsageSaveChat = "";
		vCannotFind = "";
		vYouReleased = "";
		vModModeOn = "";
		vModModeOff = "";
		vDropped = "";
		vDeleted = "";
		vFullStash = "";
		vIsIn = "";
		vDrop = "";
		vHotkeyF = "";
		vSetAs = "";
		vRemove = "";
		vWhere = "";
		vPM = "";
		vPartyCmd = "";
		vBlockList = "";
		vYouWonded = "";
		vYouRecovered = "";
		vSetToRecovered = "";
		vResHome = "";
		vPosIs = "";
		vWoundPet = "";
		vEntCharName = "";
		vCharNMiss = "";
		vNoSrv = "";
		vConnecte = "";
		vBanned = "";
		vDaysLeft = "";
		vDasLeft = "";
		vConnected = "";
		vOurFail = "";
		vPleaseLatest = "";
		vUnavail = "";
		vYouDisconnected = "";
		vReconecting = "";
		vDisconection = "";
		vConnectionLostR = "";
		vConnectionLost = "";
		vConnectionLostS = "";
		vReconnecte = "";
		vCannotSend = "";
		vSendTo = "";
		vIsFriend = "";
		vIsBlocked = "";
		vHasArrived = "";
		vErrNotice = "";
		vSentErrors = "";
		vDisconnected = "";
		vTimedOut = "";
		vHasLeft = "";
		vEgg1 = "";
		vEgg2 = "";
		vEgg3 = "";
		vEgg4 = "";
		vEgg5 = "";
		vPMember = "";
		vHasDisconnected = "";
		vKickedAdmin = "";
		vDisByUser = "";
		vDisByAnother = "";
		vHasJoinedP = "";
		vHasLeftP = "";
		vAlreadyInP = "";
		vYouLeftP = "";
		vYouHaveTamed = "";
		vAn = "";
		vA = "";
		vHaveYouTamed = "";
		vIsWonded = "";
		vRecoverWound = "";
		vMoved = "";
		vIntoStash = "";
		vDimension = "";
		vIstOnline = "";
		vSrvRestartingIn = "";
		vPleaseLogOut = "";
		vInvUoP = "";
		vUserAlready = "";
		vAccCreated = "";
		vUserUse = "";
		vPassChanged = "";
		vPassChangeFail = "";
		vCharLoadFail = "";
		vCharEditFail = "";
		vHass = "";
		vInvYou = "";
		vRquested = "";
		vTJoinP = "";
		vActions = "";
		vPlopDown = "";
		vLay = "";
		vSit = "";
		vRollOver = "";
		vLayDown = "";
		vSideLay = "";
		vStopCrouch = "";
		vPoint = "";
		vStretch = "";
		vHeadswing = "";
		vHeadbang = "";
		vButtswing = "";
		vWingwave = "";
		vMoonwalk = "";
		vThriller = "";
		vRofl = "";
		vRoar = "";
		vCurl = "";
		vFaint = "";
		vSecondaryAct = "";
		vNodHead = "";
		vShakeHead = "";
		vSlowNodHead = "";
		vShakeSlowHead = "";
		vHeadTilt = "";
		vLick = "";
		vStopLick = "";
		vNuzzle = "";
		vStopNuzzle = "";
		vSniff = "";
		vTailFlick = "";
		vLaugh = "";
		vChuckle = "";
		vEmotes = "";
		vCrouch = "";
		vLogSaved = "";
	}
	~MagixLanguageManager()
	{
	}
	void Langs()
	{
		char lng[2];
		std::ifstream inFile("lang.cfg",std::ios::binary);
		if(!inFile.good())
		{
			lang = "en";
		}
		inFile.getline(lng,3);
		inFile.close();
		if(strcmp(lng, "en")==1 || strcmp(lng, "ru")==1)
		{
			lang = lng;
		}
		else lang = "en";
	}
	void setLangues()
	{
		Langs();
		if(lang=="en")
		{
			vNewGame = "New Game";
			vMultiplayer = "Multiplayer";
			vAbout = "About";
			vQuit = "Quit";
			vUpdate = "Last update 2014";
			vBack = "Back";
			vForum = "Visit Forum";
			vVK = "Visit VK";
			vCredit = "Some text";
			vUsername = "Username: ";
			vUsername2 = "Username";
			vPassword = "Password: ";
			vLogin = "Log In";
			vNewAccount = "New Account";
			vChangePass = "Change Password";
			vCreateNewAcc = "Create New Account";
			vConfirmPass = "Confirm Password: ";
			vEmail = "Email: ";
			vQuestion = "Security Question: ";
			vAnswer = "Answer: ";
			vOldPass = "Old Password: ";
			vNewPass = "New Password: ";
			vConfirm = "Confirm Password: ";
			vConnecting = "Connecting...";
			vNext = "Next";
			vEdit = "Edit";
			vNew = "New";
			vStart = "Start";
			vEditCharacter = "Edit Character";
			vDelete = "Delete";
			vFinish = "Finish";
			vSize = "Size";
			vMustNotInc = "Must not include : ; | * ? < > / \\";
			vMustNotSpace = "Must not start with a space";
			vEntName = "Enter a name";
			vName = "Name: ";
			vPelt = "Pelt";
			vUnderfur = "Underfur";
			vMane = "Mane";
			vNose = "Nose";
			vAboveEyes = "Above Eyes";
			vBelowEyes = "Below Eyes";
			vEars = "Ears";
			vTailtip = "Tailtip";
			vEyes = "Eyes";
			vWings = "Wings";
			vMarkings = "Markings";
			vLoading = "Loading...";
			vResume = "Resume";
			vSettings = "Settings";
			vInterface = "Interface";
			vOff = "Off";
			vOn = "On";
			vCharacter = "Character";
			vAbsolute = "Absolute";
			vRelative = "Relative";
			vRestart = "Restart";
			vCreating = "Creating...";
			vSaving = "Saving...";
			vMusic = "Music";
			vGUISound = "GUI Sound";
			vSound = "Sound";
			vShadows = "Shadows";
			vBloom = "Bloom Effect";
			vGeometry = "Paged Geometry";
			vDistance = "View Distance";
			vTablet = "Use Tablet [hotkey:insert]";
			vSensitivity = "Sensitivity";
			vGeneralName = "General Name Display";
			vLocalName = "Local Name Display";
			vChButtonBlink = "Channel Button Blink";
			vRunMode = "Run Mode";
			vDoubleJump = "Double Jump";
			vLipSync = "Auto LipSync";
			vWindowCursor = "Use Windows Cursor";
			vLanguage = "Language";
			vClickHere = "Click here to create\na new character";
			vShow = "Show";
			vHide = "Hide";
			vSay = "Say: ";
			vSay2 = "Say: ";
			vSend = "Send";
			vLocal = "Local";
			vParty = "Party";
			vGeneral = "General";
			vAttack = "Attack";
			vEquip = "Equip";
			vPet = "Pet";
			vHomeHead = "-Home-";
			vBioHead = "-Bio-";
			vFriendsHead = "-Friends-";
			vItemsHead = "-Items-";
			vExpressionsHead = "-Expressions-";
			vPartyHead = "-Party-";
			vStashHead = "-Stash-";
			vSetHome = "Set Home";
			vGoHome = "Go Home";
			vResetHome = "Reset Home";
			vDim = "-Dimension-";
			vChange = "Change";
			vNone = "None";
			vOnlineFriends = "ONLINE FRIENDS:";
			vOfflineFriends = "OFFLINE FRIENDS:";
			vOnlinePlayers = "ONLINE PLAYERS:";
			vBlockedList = "BLOCKED LIST:";
			vStash = "Stash";/////////
			vHomeCmd = "--Home Commands--";
			vFriendCmd = "--Friend/Block Commands--";
			vPetCmd = "--Pet Commands--";
			vOtherCmd = "--Other Commands--";
			vPartyCmd = "--Party Commands--";
			vNm = "name";
			vMsg = "message";
			vFilname = "filename";
			vMap = "map";
			vNDays = "num days";
			vLResort = "Use as last resort";
			vPlayertoken = "playertoken";
			vNoHearYou = "No one hears you.";
			vMDims = "Dims above MAXDIMS is reserved for staff.";
			vFollow = "Follow";///
			vStay = "Stay";///
			vGrow = "Grow";///
			vShrink = "Shrink";///
			vDevolve = "Devolve";///
			vEvolve = "Evolve";///
			vPraise = "Praise";///
			vDraw = "Draw";///
			vViewBio = "View Bio";///
			vUnblock = "Unblock";///
			vBlock = "Block";///
			vRemoveFr = "Remove Friend";///
			vAddFr = "Add Friend";///
			vInviteP = "Invite Party";///
			vJoinP = "Join Party";///
			vCannotAttack = "Cannot attack when you're wounded.";
			vTargetNeed = "This skill needs a target, use E to target close units.";
			vScreenSaved = "Screenshot saved";
			vTabletOn = "Switched to Tablet Mode (Hotkey INSERT)";
			vTabletOff = "Switched to Mouse Mode (Hotkey INSERT)";
			vTakenEffects = "Restart the game for this option to take effect";
			vTakenCorrectEffects = "Перезапустите игру для корректного применения изменений\nRestart the game for this option to take correct effect";
			vAdded = "Added ";
			vRemoved = "Removed ";
			vAsFriend = " as Friend.";
			vTo = " to";
			vFrom = " from";
			vBlockList = " Blocked List.";
			vEnterUsername = "Enter username";
			vEnterPassword = "Enter password";
			vEnterPasswordConf = "Enter password confirmation";
			vConfirmPasswordMiss = "Confirm Password mismatch!";
			vNotWithSpace = "Username may not start with a space";
			vNotContain = "Username may not contain /\\:*?\"<>|";
			vEnterOldPwd = "Enter old password";
			vEnterNewPwd = "Enter new password";
			vEnterNewPwdConf = "Enter new password confirmation";
			vEnterConfPwdMiss = "Confirm Password mismatch!";
			vUsageRoll = "Usage: /roll [dice] [sides]";
			vMaxDice = "Max dice 100, sides 100.";
			vRolled = "rolled ";
			vOf = " of ";
			vSideGot = " sides and got a ";
			vCannotCreateItem = "Cannot create private items.";
			vItemNotExist = "Item doesn't exist.";
			vSpawnedItem = "Spawned item ";
			vCannotEquip = "Cannot equip anymore items.";
			vEquipped = "Equipped ";
			vPage = "Page ";///
			vPartyFull = "Party is full.";
			vInviting = "Inviting ";
			vToJoin = " to join party.";
			vIRequestingToJoin = "Requesting to join ";
			vSparty = "'s party.";
			vUsageSaveChat = "Usage: /savechat [filename]";
			vCannotFind = "Cannot find ";
			vYouReleased = "You have released your ";
			vModModeOn = "Mod mode on";
			vModModeOff = "Mod mode off";
			vDropped = "Dropped ";
			vDeleted = "Deleted ";
			vFullStash = "Your stash is full.";
			vIsIn = " is in ";
			vDrop = "Drop";///
			vHotkeyF = "Hotkey F";
			vSetAs = " set as '";
			vRemove = "Remove";///
			vWhere = "Where";///
			vPM = "PM";///
			vYouWonded = "You're wounded!";
			vYouRecovered = "You've recovered from your wound.";
			vSetToRecovered = "Home Point has been set to the current position.";
			vResHome = "Home Point has been reset.";
			vPosIs = "Position is ";
			vWoundPet = "Your pet is wounded! It will not engage in battle until you cure it.";
			vEntCharName = "Enter character name to confirm delete";
			vCharNMiss = "Character name mismatch";
			vNoSrv = "No servers to connect to :U";
			vConnecte = "Connecting to Server ";
			vBanned = "You have been banned";
			vDaysLeft = " days left)";
			vDasLeft = " day left)";
			vConnected = "Connected.";
			vOurFail = "Our connection request has failed :c";
			vPleaseLatest = "Please download the latest version c:";
			vUnavail = "This server is temporarily unavailable :B";
			vYouDisconnected = "We have been disconnected :c";
			vReconecting = "Disconnected, reconnecting...";
			vDisconection = "Disconnected from Server ";
			vConnectionLostR = "Connection lost, reconnecting...";
			vConnectionLost = "Connection lost from Server ";
			vConnectionLostS = "Connection lost :c";
			vReconnecte = ", reconnecting...";
			vCannotSend = "Cannot send Private Message to yourself.";
			vSendTo = "Sent Private Message to ";
			vIsFriend = " (Friend)";
			vIsBlocked = " (Blocked)";
			vHasArrived = " has arrived.";
			vErrNotice = "Error notice:";
			vSentErrors = "has sent erroneous data.";
			vDisconnected = " has disconnected.";
			vTimedOut = " timed out.";
			vHasLeft = " has left.";
			vEgg1 = "Your Red Easter Egg has hatched into a Great Hawk!";
			vEgg2 = "Your Blue Easter Egg has hatched into a Overgrown Gazelle!";
			vEgg3 = "Your Green Easter Egg has hatched into a Giant Manta Ray!";
			vEgg4 = "Your Silver Easter Egg has hatched into a Zombie Dragon!";
			vEgg5 = "Your Gold Easter Egg has hatched into a Sea Serpent!";
			vPMember = "Party Member ";
			vKickedAdmin = "Disconnected from server (Kicked by Admin)";
			vDisByUser = "Disconnected by another user";
			vDisByAnother = "Disconnected from server (Another user logged on)";
			vHasJoinedP = " has joined the party.";
			vHasLeftP = " has left the party.";
			vAlreadyInP = " is already in a party.";
			vYouLeftP = "You have left the party.";
			vYouHaveTamed = "You have tamed ";
			vAn = "an ";
			vA = "a ";
			vHaveYouTamed = "You have tamed more than one pet, only the newest one will follow you.";
			vIsWonded = " is wounded!";
			vRecoverWound = " recovered from the wound.";
			vMoved = "Moved ";
			vIntoStash = " into stash.";
			vDimension = " dimension ";
			vIstOnline = " is not online.";
			vSrvRestartingIn = "Servers are restarting in ";
			vPleaseLogOut = " seconds. Please log out to avoid data loss. Thank you C:";
			vInvUoP = "Invalid username or password";
			vUserAlready = "Username already logged in";
			vAccCreated = "Account Created Successfully";
			vUserUse = "Username is already in use";
			vPassChanged = "Password Changed Successfully";
			vPassChangeFail = "Character load failed";
			vCharLoadFail = "Create Character failed";
			vCharEditFail = "Edit Character failed";
			vHass = " has\n";
			vInvYou = "invited you";
			vRquested = "requested";
			vTJoinP = " to join party";
			vActions = "ACTIONS:";
			vPlopDown = "Plop Down";
			vLay = "Lay";
			vSit = "Sit";
			vRollOver = "Roll over";
			vLayDown = "Lay Down";
			vSideLay = "Side Lay";
			vStopCrouch = "Stop Crouch";
			vCrouch = "Crouch";/////
			vPoint = "Point";
			vStretch = "Stretch";
			vHeadswing = "Headswing";
			vHeadbang = "Headbang";
			vButtswing = "Buttswing";
			vWingwave = "Wingwave";
			vMoonwalk = "Moonwalk";
			vThriller = "Thriller";
			vRofl = "Rofl";
			vRoar = "Roar";
			vCurl = "Curl";
			vFaint = "Faint";
			vSecondaryAct = "SECONDARY ACTIONS:";
			vNodHead = "Nod Head";
			vShakeHead = "Shake Head";
			vSlowNodHead = "Nod Head (Slow)";
			vShakeSlowHead = "Shake Head (Slow)";
			vHeadTilt = "Head Tilt";
			vLick = "Lick";
			vStopLick = "Stop Lick";
			vNuzzle = "Nuzzle";
			vStopNuzzle = "Stop Nuzzle";
			vSniff = "Sniff";
			vTailFlick = "Tail Flick";
			vLaugh = "Laugh";
			vChuckle = "Chuckle";
			vEmotes = "EMOTES:";
			vLogSaved = "Saved chat log as ";
			OverlayManager::getSingleton().getOverlayElement("GUI/InterfaceButtonText9")->setCaption("English");
			OverlayManager::getSingleton().getOverlayElement("GUI/InterfaceText1")->setPosition(0.08, 0.052);
		}
		else if(lang=="ru")
		{
			vNewGame = "Новая игра";
			vMultiplayer = "Сетевая игра";
			vAbout = "О нас";
			vQuit = "Выход";
			vUpdate = "Последнее обновление 2014";
			vBack = "Назад";
			vForum = "Посетить форум";
			vVK = "Посетить страницу VK";
			vCredit = "Какой-то текст";
			vUsername = "Ник: ";
			vUsername2 = "Ник";
			vPassword = "Пароль: ";
			vLogin = "Войти";
			vNewAccount = "Создать аккаунт";
			vChangePass = "Изменить пароль";
			vCreateNewAcc = "Создать аккаунт";
			vConfirmPass = "Повторите пароль: ";
			vEmail = "E-mail: ";
			vQuestion = "Секретный вопрос: ";
			vAnswer = "Ответ: ";
			vOldPass = "Старый пароль: ";
			vNewPass = "Новый пароль: ";
			vConfirm = "Отправить";
			vConnecting = "Подключение...";
			vNext = "Далее";
			vEdit = "Изменить";
			vNew = "Новый";
			vStart = "Старт";
			vEditCharacter = "Изменить персонаж";
			vDelete = "Удалить";
			vFinish = "Закончить";
			vSize = "Размер";
			vMustNotInc = "Нельзя использовать символы : ; | * ? < > / \\ в имени";
			vMustNotSpace = "Имя не должно начинаться с пробела";
			vEntName = "Введите имя";
			vName = "Имя: ";
			vPelt = "Шкура";
			vUnderfur = "Подшерсток";
			vMane = "Грива";
			vNose = "Нос";
			vAboveEyes = "Обводка над глазами";
			vBelowEyes = "Обводка под глазами";
			vEars = "Уши";
			vTailtip = "Кончик хвоста";
			vEyes = "Глаза";
			vWings = "Крылья";
			vMarkings = "Разметка";
			vLoading = "Загрузка...";
			vResume = "Продолжить";
			vSettings = "Настройки";
			vInterface = "Интерфейс";
			vOff = "Выкл";
			vOn = "Вкл";
			vCharacter = "Персонаж";
			vAbsolute = "Абсолютно";
			vRelative = "Относительно";
			vRestart = "Стартовое меню";
			vCreating = "Создание...";
			vSaving = "Сохранение...";
			vMusic = "Музыка";
			vGUISound = "Звуки элементов";
			vSound = "Звуки";
			vShadows = "Тени";
			vBloom = "Эффекст цветения";
			vGeometry = "Оптимизация";
			vDistance = "Дальность обзора";
			vTablet = "Планшетный режим [клавиша Insert]";
			vSensitivity = "Чувствительность";
			vGeneralName = "Основной вывод имени";
			vLocalName = "Клиентский вывод имени";
			vChButtonBlink = "Мигающая кнопка канала";
			vRunMode = "Режим бега";
			vDoubleJump = "Двойной прыжок";
			vLipSync = "Автосинхронизация губ";
			vWindowCursor = "Использовать обычный курсор";
			vLanguage = "Язык";
			vClickHere = "Нажмите здесь чтобы\nсоздать персонаж";
			vShow = "Показать";
			vHide = "Скрыть";
			vSay = "Говори: ";
			vSay2 = "Сказать";
			vSend = "Отправить";
			vLocal = "Локальный";
			vParty = "Вечеринка";
			vGeneral = "Основной";
			vAttack = "Атака";
			vEquip = "Оборудовать";
			vPet = "Питомец";
			vHomeHead = "-Дом-";
			vBioHead = "-Биография-";
			vFriendsHead = "-Друзья-";
			vItemsHead = "-Итемы-";
			vExpressionsHead = "-Действия-";
			vPartyHead = "-Вечеринка-";
			vStashHead = "-Тайник-";
			vSetHome = "Сделать домом";
			vGoHome = "Домой";
			vResetHome = "Сбросить дом";
			vDim = "-Измерение-";
			vChange = "Изменить";
			vNone = "Пусто";
			vOnlineFriends = "ДРУЗЬЯ ОНЛАЙН:";
			vOfflineFriends = "ДРУЗЬЯ ОФФЛАЙН:";
			vOnlinePlayers = "ИГРОКИ ОНЛАЙН:";
			vBlockedList = "ЧЕРНЫЙ СПИСОК:";
			vStash = "Тайник";
			vHomeCmd = "--Команды Дома--";
			vFriendCmd = "--Команды Черного списка друзей--";
			vPetCmd = "--Команды питомца--";
			vOtherCmd = "--Прочие команды--";
			vPartyCmd = "--Команды вечеринки--";
			vNm = "имя";
			vMsg = "сообщение";
			vFilname = "имя файла";
			vMap = "карта";
			vNDays = "число дней";
			vLResort = "Используйте в крайних случаях";
			vPlayertoken = "игрок";
			vNoHearYou = "Тебя никто не слышит.";
			vMDims = "Число измерений превышает максимально допустимое значение, зарезервированное персоналом.";
			vFollow = "Следовать";
			vStay = "Стоять";
			vGrow = "Grow";
			vShrink = "Shrink";
			vDevolve = "Devolve";
			vEvolve = "Evolve";
			vPraise = "Praise";
			vDraw = "Draw";
			vViewBio = "Биография";
			vUnblock = "Разблокировать";
			vBlock = "Блокировать";
			vRemoveFr = "Удалить из друзей";
			vAddFr = "В друзья";
			vInviteP = "Пригласить на тусовку";
			vJoinP = "Присоединиться к тусовке";
			vCannotAttack = "Невозможно атаковать, пока ты ранен(а).";
			vTargetNeed = "Для этого умения нужно цель, нажмите E для цель закрыть юниты кошка холодильникъ кроватьэ";
			vScreenSaved = "Скриншот сохранен";
			vTabletOn = "Переключено в режим планшета (Клавиша Insert)";
			vTabletOff = "Переключено в режим мышки (Клавиша Insert)";
			vTakenEffects = "Перезапустите игру для применения изменений";
			vTakenCorrectEffects = "Restart the game for this option to take correct effect\nПерезапустите игру для корректного применения изменений";
			vAdded = "Добавлен ";
			vRemoved = "Удален ";
			vAsFriend = " в друзья.";
			vTo = " в";
			vFrom = " из";
			vBlockList = " черный список.";
			vEnterUsername = "Введите ник";
			vEnterPassword = "Введите пароль";
			vEnterPasswordConf = "Повторите пароль";
			vConfirmPasswordMiss = "Пароли не совпадают!";
			vNotWithSpace = "Ник не может начинаться с пробела";
			vNotContain = "Ник не может содержать в себе символы /\\:*?\"<>|";
			vEnterOldPwd = "Введите старый пароль";
			vEnterNewPwd = "Введите новый пароль";
			vEnterNewPwdConf = "Повторите новый пароль";
			vEnterConfPwdMiss = "Пароли не совпадают!";
			vUsageRoll = "Используйте: /roll [кость] [стороны]";
			vMaxDice = "Максимально костей 100, сторон 100.";
			vRolled = "выкатилось ";
			vOf = " из ";
			vSideGot = " сторон и получил ";
			vCannotCreateItem = "Невозможно создать частный элемент.";
			vItemNotExist = "Элемент не существует.";
			vSpawnedItem = "Создан элемент ";
			vCannotEquip = "Невозможно оборудовать какие-либо элементы.";
			vEquipped = "Оборудовано ";
			vPage = "Страница ";
			vPartyFull = "Тусовка заполнена.";
			vInviting = "Запрос от ";
			vToJoin = " присоединиться к тусовке.";
			vIRequestingToJoin = "Приглашение присоединиться к ";
			vSparty = " вечеринке.";
			vUsageSaveChat = "Используйте: /savechat [имя файла]";
			vCannotFind = "Не найден ";
			vYouReleased = "Выпущен ";
			vModModeOn = "Режим модерации включен";
			vModModeOff = "Режим модерации выключен";
			vDropped = "Брошен ";
			vDeleted = "Удален ";
			vFullStash = "Тайник переполнен.";
			vIsIn = " в ";
			vDrop = "Бросить";
			vHotkeyF = "Клавиша F";
			vSetAs = "Установлена как";
			vRemove = "Удалить";
			vWhere = "Где";
			vPM = "PM";
			vYouWonded = "Вы ранены";
			vYouRecovered = "Вы оправились от ран.";
			vSetToRecovered = "Дом был установлен на текущую позицию.";
			vResHome = "Дом был установлен на позицию по умолчанию.";
			vPosIs = "Позиция ";
			vWoundPet = "Ваш питомец ранен! It will not engage in battle until you cure it.";
			vEntCharName = "Введите имя персонажа для удаления";
			vCharNMiss = "Неправильное имя персонажа";
			vNoSrv = "Нет серверов для подклюения";
			vConnecte = "Подключение к серверу ";
			vBanned = "Вы забанены";
			vDaysLeft = " дней прошло)";
			vDasLeft = " день прошел)";
			vConnected = "Подключено.";
			vOurFail = "Наш запрос на подключение был прерван :c";
			vPleaseLatest = "Пожалуйста, загрузите последнюю версию клиента c:";
			vUnavail = "Неправильный адрес. Порт закрыт :B";
			vYouDisconnected = "Мы отключились :c";
			vReconecting = "Отключено, переподключение...";
			vDisconection = "Соединение с сервером прервано ";
			vConnectionLostR = "Соединение прервано, переподключение...";
			vConnectionLost = "Соединение с сервером потеряно ";
			vConnectionLostS = "Соединение прервано :c";
			vReconnecte = ", переподключение...";
			vCannotSend = "Нельзя отправлять личное сообщение себе.";
			vSendTo = "Отправка личного сообщения ";
			vIsFriend = " (Друг)";
			vIsBlocked = " (В ЧС)";
			vHasArrived = " подключился.";
			vErrNotice = "Ошибка:";
			vSentErrors = "отправил некорректные данные.";
			vDisconnected = " отключился.";
			vTimedOut = " АФК.";
			vHasLeft = " вышел.";
			vEgg1 = "Твое красное яйцо раскололось и ты получаешь питомца - Большого Ястреба!";
			vEgg2 = "Твое синее яйцо раскололось и ты получаешь питомца - Большую Газель!";
			vEgg3 = "Твое зеленое яйцо раскололось и ты получаешь питомца - Большого Ската!";
			vEgg4 = "Твое серебряное яйцо раскололось и ты получаешь питомца - Зомби Дракона!";
			vEgg5 = "Твое золотое яйцо раскололось и ты получаешь питомца - Морского Змея!";
			vPMember = "Участник тусовки ";
			vKickedAdmin = "Соединение прервано администратором (Kick)";
			vDisByUser = "Соединение прервано другим пользователем";
			vDisByAnother = "Соединение прервано (Другой пользователь вошел)";
			vHasJoinedP = " присоединился к тусовке.";
			vHasLeftP = " покинул тусовку.";
			vAlreadyInP = " уже в тусовке.";
			vYouLeftP = "Вы покинули тусовка.";
			vYouHaveTamed = "You have tamed ";
			vAn = "an ";
			vA = "a ";
			vHaveYouTamed = "You have tamed more than one pet, only the newest one will follow you.";
			vIsWonded = " ранен!";
			vRecoverWound = " востановлен от ранения.";
			vMoved = "Перемещено ";
			vIntoStash = " в тайник.";
			vDimension = " измерение ";
			vIstOnline = " оффлайн.";
			vSrvRestartingIn = "Сервер перезагрузится через ";
			vPleaseLogOut = " секунд. Пожалуйста, выйдите, во избежании потери данных. Спасибо!";
			vInvUoP = "Неправильный ник или пароль";
			vUserAlready = "Пользователь уже в сети";
			vAccCreated = "Аккаунт успешно создан";
			vUserUse = "Ник уже используется";
			vPassChanged = "Пароль успешно изменен";
			vPassChangeFail = "Ошибка загрузки персонажа";
			vCharLoadFail = "Ошибка создания персонажа";
			vCharEditFail = "Ошибка редактирования персонажа";
			vHass = "\n";
			vInvYou = "приглашает тебя";
			vRquested = "просит";
			vTJoinP = " присоединиться к вечеринке";
			vActions = "ДЕЙСТВИЯ:";
			vPlopDown = "Plop Down";
			vLay = "Лечь";
			vSit = "Сесть";
			vRollOver = "Roll over";
			vLayDown = "Lay Down";
			vSideLay = "Side Lay";
			vStopCrouch = "Stop Crouch";
			vCrouch = "Crouch";/////
			vPoint = "Point";
			vStretch = "Stretch";
			vHeadswing = "Headswing";
			vHeadbang = "Headbang";
			vButtswing = "Buttswing";
			vWingwave = "Wingwave";
			vMoonwalk = "Лунная походка";
			vThriller = "Триллер";
			vRofl = "Rofl";
			vRoar = "Roar";
			vCurl = "Curl";
			vFaint = "Faint";
			vSecondaryAct = "ПРОЧИЕ ДЕЙСТВИЯ:";
			vNodHead = "Nod Head";
			vShakeHead = "Shake Head";
			vSlowNodHead = "Nod Head (Slow)";
			vShakeSlowHead = "Shake Head (Slow)";
			vHeadTilt = "Head Tilt";
			vLick = "Lick";
			vStopLick = "Stop Lick";
			vNuzzle = "Nuzzle";
			vStopNuzzle = "Stop Nuzzle";
			vSniff = "Понюхать";
			vTailFlick = "Tail Flick";
			vLaugh = "Смех";
			vChuckle = "Chuckle";
			vEmotes = "ЭМОЦИИ:";
			vLogSaved = "Лог чата сохранен в ";
			OverlayManager::getSingleton().getOverlayElement("GUI/InterfaceButtonText9")->setCaption("Русский");
			OverlayManager::getSingleton().getOverlayElement("GUI/InterfaceText1")->setPosition(0.01, 0.052);
		}
		OverlayManager::getSingleton().getOverlayElement("GUI/GameOverQuitButtonText")->setCaption(vQuit);
		OverlayManager::getSingleton().getOverlayElement("GUI/OptionResumeButtonText")->setCaption(vResume);
		OverlayManager::getSingleton().getOverlayElement("GUI/OptionSettingsButtonText")->setCaption(vSettings);
		OverlayManager::getSingleton().getOverlayElement("GUI/OptionInterfaceButtonText")->setCaption(vInterface);
		OverlayManager::getSingleton().getOverlayElement("GUI/OptionRestartButtonText")->setCaption(vRestart);
		OverlayManager::getSingleton().getOverlayElement("GUI/OptionQuitButtonText")->setCaption(vQuit);
		OverlayManager::getSingleton().getOverlayElement("GUI/SettingsButtonBackText")->setCaption(vBack);
		OverlayManager::getSingleton().getOverlayElement("GUI/InterfaceButtonBackText")->setCaption(vBack);
		OverlayManager::getSingleton().getOverlayElement("GUI/UpdateBoxText")->setCaption(vUpdate);
		OverlayManager::getSingleton().getOverlayElement("GUI/LogonButtonText1")->setCaption(vLogin);
		OverlayManager::getSingleton().getOverlayElement("GUI/LogonButtonText2")->setCaption(vNewAccount);
		OverlayManager::getSingleton().getOverlayElement("GUI/LogonButtonText3")->setCaption(vChangePass);
		OverlayManager::getSingleton().getOverlayElement("GUI/LogonButtonTextBack")->setCaption(vBack);
		OverlayManager::getSingleton().getOverlayElement("GUI/LogonText1")->setCaption(vMultiplayer);
		OverlayManager::getSingleton().getOverlayElement("GUI/VisitForumText")->setCaption(vForum);
		OverlayManager::getSingleton().getOverlayElement("GUI/VisitVKText")->setCaption(vVK);
		OverlayManager::getSingleton().getOverlayElement("GUI/CreditBackText")->setCaption(vBack);
		OverlayManager::getSingleton().getOverlayElement("GUI/CreditTitle")->setCaption(vAbout);
		OverlayManager::getSingleton().getOverlayElement("GUI/CreditText")->setCaption(vCredit);
		OverlayManager::getSingleton().getOverlayElement("GUI/CreateAccountButtonText1")->setCaption(vNewAccount);
		OverlayManager::getSingleton().getOverlayElement("GUI/CreateAccountButtonTextBack")->setCaption(vBack);
		OverlayManager::getSingleton().getOverlayElement("GUI/EditAccountButtonText1")->setCaption(vConfirm);
		OverlayManager::getSingleton().getOverlayElement("GUI/SettingsText1")->setCaption(vMusic);
		OverlayManager::getSingleton().getOverlayElement("GUI/SettingsText2")->setCaption(vGUISound);
		OverlayManager::getSingleton().getOverlayElement("GUI/SettingsText3")->setCaption(vSound);
		OverlayManager::getSingleton().getOverlayElement("GUI/SettingsText4")->setCaption(vShadows);
		OverlayManager::getSingleton().getOverlayElement("GUI/SettingsText5")->setCaption(vBloom);
		OverlayManager::getSingleton().getOverlayElement("GUI/SettingsText6")->setCaption(vGeometry);
		OverlayManager::getSingleton().getOverlayElement("GUI/SettingsText7")->setCaption(vDistance);
		OverlayManager::getSingleton().getOverlayElement("GUI/InterfaceText1")->setCaption(vTablet);
		OverlayManager::getSingleton().getOverlayElement("GUI/InterfaceText2")->setCaption(vSensitivity);
		OverlayManager::getSingleton().getOverlayElement("GUI/InterfaceText3")->setCaption(vGeneralName);
		OverlayManager::getSingleton().getOverlayElement("GUI/InterfaceText4")->setCaption(vLocalName);
		OverlayManager::getSingleton().getOverlayElement("GUI/InterfaceText5")->setCaption(vChButtonBlink);
		OverlayManager::getSingleton().getOverlayElement("GUI/InterfaceText6")->setCaption(vRunMode);
		OverlayManager::getSingleton().getOverlayElement("GUI/InterfaceText7")->setCaption(vDoubleJump);
		OverlayManager::getSingleton().getOverlayElement("GUI/InterfaceText8")->setCaption(vLipSync);
		OverlayManager::getSingleton().getOverlayElement("GUI/InterfaceText9")->setCaption(vWindowCursor);
		OverlayManager::getSingleton().getOverlayElement("GUI/InterfaceText10")->setCaption(vLanguage);
		OverlayManager::getSingleton().getOverlayElement("GUI/EditAccountButtonTextBack")->setCaption(vBack);
		OverlayManager::getSingleton().getOverlayElement("GUI/EditAccountText")->setCaption(vChangePass);
		OverlayManager::getSingleton().getOverlayElement("GUI/CampaignButtonTextBack")->setCaption(vBack);
		OverlayManager::getSingleton().getOverlayElement("GUI/CampaignButtonTextNext")->setCaption(vNext);
		OverlayManager::getSingleton().getOverlayElement("GUI/CharScreenButtonTextBack")->setCaption(vBack);
		OverlayManager::getSingleton().getOverlayElement("GUI/CharScreenButtonTextNext")->setCaption(vBack);
		OverlayManager::getSingleton().getOverlayElement("GUI/LogonPasswordText")->setCaption(vPassword);
		OverlayManager::getSingleton().getOverlayElement("GUI/SettingsButtonText1")->setCaption(vOff);
		OverlayManager::getSingleton().getOverlayElement("GUI/SettingsButtonText2")->setCaption(vOff);
		OverlayManager::getSingleton().getOverlayElement("GUI/SettingsButtonText3")->setCaption(vOff);
		OverlayManager::getSingleton().getOverlayElement("GUI/InterfaceButtonText1")->setCaption(vOff);
		OverlayManager::getSingleton().getOverlayElement("GUI/InterfaceButtonText7")->setCaption(vOff);
		OverlayManager::getSingleton().getOverlayElement("GUI/InterfaceButtonText8")->setCaption(vOff);
		OverlayManager::getSingleton().getOverlayElement("GUI/InterfaceButtonText4")->setCaption(vOn);
		OverlayManager::getSingleton().getOverlayElement("GUI/InterfaceButtonText6")->setCaption(vOn);
		OverlayManager::getSingleton().getOverlayElement("GUI/InterfaceButtonText5")->setCaption(vAbsolute);
		OverlayManager::getSingleton().getOverlayElement("GUI/InterfaceButtonText2")->setCaption(vUsername2);
		OverlayManager::getSingleton().getOverlayElement("GUI/InterfaceButtonText3")->setCaption(vCharacter);
		OverlayManager::getSingleton().getOverlayElement("GUI/StartScreenButtonText1")->setCaption(vNewGame);
		OverlayManager::getSingleton().getOverlayElement("GUI/StartScreenButtonText2")->setCaption(vMultiplayer);
		OverlayManager::getSingleton().getOverlayElement("GUI/StartScreenButtonText4")->setCaption(vAbout);
		OverlayManager::getSingleton().getOverlayElement("GUI/StartScreenButtonText3")->setCaption(vQuit);
		OverlayManager::getSingleton().getOverlayElement("GUI/LogonPasswordText")->setCaption(vPassword);
		OverlayManager::getSingleton().getOverlayElement("GUI/CharScreenNameText")->setCaption(vName);
		OverlayManager::getSingleton().getOverlayElement("GUI/CreateAccountText")->setCaption(vCreateNewAcc);
		OverlayManager::getSingleton().getOverlayElement("GUI/EditAccountText1")->setCaption(vUsername);
		OverlayManager::getSingleton().getOverlayElement("GUI/EditAccountText2")->setCaption(vOldPass);
		OverlayManager::getSingleton().getOverlayElement("GUI/EditAccountText3")->setCaption(vNewPass);
		OverlayManager::getSingleton().getOverlayElement("GUI/EditAccountText4")->setCaption(vConfirmPass);
		OverlayManager::getSingleton().getOverlayElement("GUI/LogonUsernameText")->setCaption(vUsername);
		OverlayManager::getSingleton().getOverlayElement("GUI/TextInputBoxButtonText")->setCaption(vSay2);
		OverlayManager::getSingleton().getOverlayElement("GUI/TextInputBoxButtonText2")->setCaption(vHide);
		OverlayManager::getSingleton().getOverlayElement("GUI/TextOutputBoxButtonText")->setCaption(vHide);
		OverlayManager::getSingleton().getOverlayElement("GUI/TextInputBoxButtonText3")->setCaption(vGeneral);
		OverlayManager::getSingleton().getOverlayElement("GUI/SelectButtonText1")->setCaption(vAttack);
		OverlayManager::getSingleton().getOverlayElement("GUI/SkillText")->setCaption(vAttack);
		OverlayManager::getSingleton().getOverlayElement("GUI/ItemMoverText")->setCaption(vItemsHead);
		OverlayManager::getSingleton().getOverlayElement("GUI/FriendMoverText")->setCaption(vFriendsHead);
		OverlayManager::getSingleton().getOverlayElement("GUI/BioMoverText")->setCaption(vBioHead);
		OverlayManager::getSingleton().getOverlayElement("GUI/TargetBioMoverText")->setCaption(vBioHead);
		OverlayManager::getSingleton().getOverlayElement("GUI/EmoteMoverText")->setCaption(vExpressionsHead);
		OverlayManager::getSingleton().getOverlayElement("GUI/HomeMoverText")->setCaption(vHomeHead);
		OverlayManager::getSingleton().getOverlayElement("GUI/PartyMoverText")->setCaption(vPartyHead);
		OverlayManager::getSingleton().getOverlayElement("GUI/StashMoverText")->setCaption(vStashHead);
		OverlayManager::getSingleton().getOverlayElement("GUI/HomeButtonText1")->setCaption(vSetHome);
		OverlayManager::getSingleton().getOverlayElement("GUI/HomeButtonText2")->setCaption(vGoHome);
		OverlayManager::getSingleton().getOverlayElement("GUI/HomeButtonText3")->setCaption(vResetHome);
		OverlayManager::getSingleton().getOverlayElement("GUI/DimensionText1")->setCaption(vDim);
		OverlayManager::getSingleton().getOverlayElement("GUI/HomeButtonText4")->setCaption(vChange);
		OverlayManager::getSingleton().getOverlayElement("GUI/ItemButtonText1")->setCaption(vStash);
		OverlayManager::getSingleton().getOverlayElement("GUI/BioBoxText")->setCaption(vNone);
		OverlayManager::getSingleton().getOverlayElement("GUI/TargetBioBoxText")->setCaption(vNone);
	}
	String NewGame()
	{
		return vNewGame;
	}
	std::string Lang()
	{
		return lang;
	}
	String Multiplayer()
	{
		return vMultiplayer;
	}
	String About()
	{
		return vAbout;
	}
	String Quit()
	{
		return vQuit;
	}
	String Update()
	{
		return vUpdate;
	}
	String Back()
	{
		return vBack;
	}
	String Forum()
	{
		return vForum;
	}
	String VK()
	{
		return vVK;
	}
	String Credit()
	{
		return vCredit;
	}
	String Username()
	{
		return vUsername;
	}
	String Username2()
	{
		return vUsername2;
	}
	String Password()
	{
		return vPassword;
	}
	String Login()
	{
		return vLogin;
	}
	String NewAccount()
	{
		return vNewAccount;
	}
	String CreateNewAcc()
	{
		return vCreateNewAcc;
	}
	String ConfirmPass()
	{
		return vConfirmPass;
	}
	String Email()
	{
		return vEmail;
	}
	String Question()
	{
		return vQuestion;
	}
	String Answer()
	{
		return vAnswer;
	}
	String OldPass()
	{
		return vOldPass;
	}
	String NewPass()
	{
		return vNewPass;
	}
	String Confirm()
	{
		return vConfirm;
	}
	String ChangePass()
	{
		return vChangePass;
	}
	String Connecting()
	{
		return vConnecting;
	}
	String Next()
	{
		return vNext;
	}
	String Start()
	{
		return vStart;
	}
	String New()
	{
		return vNew;
	}
	String EditCharacter()
	{
		return vEditCharacter;
	}
	String Delete()
	{
		return vDelete;
	}
	String Finish()
	{
		return vFinish;
	}
	String Size()
	{
		return vSize;
	}
	String MustNotInc()
	{
		return vMustNotInc;
	}
	String EntName()
	{
		return vEntName;
	}
	String MustNotSpace()
	{
		return vMustNotSpace;
	}
	String Name()
	{
		return vName;
	}
	String Pelt()
	{
		return vPelt;
	}
	String Underfur()
	{
		return vUnderfur;
	}
	String Mane()
	{
		return vMane;
	}
	String Nose()
	{
		return vNose;
	}
	String AboveEyes()
	{
		return vAboveEyes;
	}
	String BelowEyes()
	{
		return vBelowEyes;
	}
	String Ears()
	{
		return vEars;
	}
	String Tailtip()
	{
		return vTailtip;
	}
	String Eyes()
	{
		return vEyes;
	}
	String Wings()
	{
		return vWings;
	}
	String Markings()
	{
		return vMarkings;
	}
	String Edit()
	{
		return vEdit;
	}
	String Loading()
	{
		return vLoading;
	}
	String Resume()
	{
		return vResume;
	}
	String Settings()
	{
		return vSettings;
	}
	String Interface()
	{
		return vInterface;
	}
	String Off()
	{
		return vOff;
	}
	String On()
	{
		return vOn;
	}
	String Character()
	{
		return vCharacter;
	}
	String Absolute()
	{
		return vAbsolute;
	}
	String Relative()
	{
		return vRelative;
	}
	String Restart()
	{
		return vRestart;
	}
	String Creating()
	{
		return vCreating;
	}
	String Saving()
	{
		return vSaving;
	}
	String Music()
	{
		return vMusic;
	}
	String GUISound()
	{
		return vGUISound;
	}
	String Sound()
	{
		return vSound;
	}
	String Shadows()
	{
		return vShadows;
	}
	String Bloom()
	{
		return vBloom;
	}
	String Geometry()
	{
		return vGeometry;
	}
	String Distance()
	{
		return vDistance;
	}
	String Tablet()
	{
		return vTablet;
	}
	String Sensitivity()
	{
		return vSensitivity;
	}
	String GeneralName()
	{
		return vGeneralName;
	}
	String LocalName()
	{
		return vLocalName;
	}
	String ChButtonBlink()
	{
		return vChButtonBlink;
	}
	String RunMode()
	{
		return vRunMode;
	}
	String DoubleJump()
	{
		return vDoubleJump;
	}
	String LipSync()
	{
		return vLipSync;
	}
	String WindowCursor()
	{
		return vWindowCursor;
	}
	String Language()
	{
		return vLanguage;
	}
	String ClickHere()
	{
		return vClickHere;
	}
	String Show()
	{
		return vShow;
	}
	String Hide()
	{
		return vHide;
	}
	String Say()
	{
		return vSay;
	}
	String Say2()
	{
		return vSay2;
	}
	String Send()
	{
		return vSend;
	}
	String Local()
	{
		return vLocal;
	}
	String Party()
	{
		return vParty;
	}
	String General()
	{
		return vGeneral;
	}
	String Attack()
	{
		return vAttack;
	}
	String Equip()
	{
		return vEquip;
	}
	String Pet()
	{
		return vPet;
	}
	String HomeHead()
	{
		return vHomeHead;
	}
	String BioHead()
	{
		return vBioHead;
	}
	String FriendsHead()
	{
		return vFriendsHead;
	}
	String ItemsHead()
	{
		return vItemsHead;
	}
	String ExpressionsHead()
	{
		return vExpressionsHead;
	}
	String PartyHead()
	{
		return vPartyHead;
	}
	String StashHead()
	{
		return vStashHead;
	}
	String Stash()
	{
		return vStash;
	}
	String OnlineFriends()
	{
		return vOnlineFriends;
	}
	String OfflineFriends()
	{
		return vOfflineFriends;
	}
	String OnlinePlayers()
	{
		return vOnlinePlayers;
	}
	String BlockedList()
	{
		return vBlockedList;
	}
	String None()
	{
		return vNone;
	}
	String Change()
	{
		return vChange;
	}
	String HomeCmd()
	{
		return vHomeCmd;
	}
	String FriendCmd()
	{
		return vFriendCmd;
	}
	String PetCmd()
	{
		return vPetCmd;
	}
	String OtherCmd()
	{
		return vOtherCmd;
	}
	String PartyCmd()
	{
		return vPartyCmd;
	}
	String Nm()
	{
		return vNm;
	}
	String Msg()
	{
		return vMsg;
	}
	String Filname()
	{
		return vFilname;
	}
	String Map()
	{
		return vMap;
	}
	String NDays()
	{
		return vNDays;
	}
	String LResort()
	{
		return vLResort;
	}
	String Playertoken()
	{
		return vPlayertoken;
	}
	String NoHearYou()
	{
		return vNoHearYou;
	}
	String MDims()
	{
		return vMDims;
	}
	String Follow()
	{
		return vFollow;
	}
	String Stay()
	{
		return vStay;
	}
	String Grow()
	{
		return vGrow;
	}
	String Shrink()
	{
		return vShrink;
	}
	String Devolve()
	{
		return vDevolve;
	}
	String Evolve()
	{
		return vEvolve;
	}
	String Praise()
	{
		return vPraise;
	}
	String Draw()
	{
		return vDraw;
	}
	String ViewBio()
	{
		return vViewBio;
	}
	String Unblock()
	{
		return vUnblock;
	}
	String Block()
	{
		return vBlock;
	}
	String RemoveFr()
	{
		return vRemoveFr;
	}
	String AddFr()
	{
		return vAddFr;
	}
	String InviteP()
	{
		return vInviteP;
	}
	String JoinP()
	{
		return vJoinP;
	}
	String CannotAttack()
	{
		return vCannotAttack;
	}
	String TargetNeed()
	{
		return vTargetNeed;
	}
	String ScreenSaved()
	{
		return vScreenSaved;
	}
	String TabletOn()
	{
		return vTabletOn;
	}
	String TabletOff()
	{
		return vTabletOff;
	}
	String TakenEffects()
	{
		return vTakenEffects;
	}
	String TakenCorrectEffects()
	{
		return vTakenCorrectEffects;
	}
	String Added()
	{
		return vAdded;
	}
	String Removed()
	{
		return vRemoved;
	}
	String AsFriend()
	{
		return vAsFriend;
	}
	String To()
	{
		return vTo;
	}
	String From()
	{
		return vFrom;
	}
	String EnterUsername()
	{
		return vEnterUsername;
	}
	String EnterPassword()
	{
		return vEnterPassword;
	}
	String EnterPasswordConf()
	{
		return vEnterPasswordConf;
	}
	String ConfirmPasswordMiss()
	{
		return vConfirmPasswordMiss;
	}
	String NotWithSpace()
	{
		return vNotWithSpace;
	}
	String NotContain()
	{
		return vNotContain;
	}
	String EnterOldPwd()
	{
		return vEnterOldPwd;
	}
	String EnterNewPwd()
	{
		return vEnterNewPwd;
	}
	String EnterNewPwdConf()
	{
		return vEnterNewPwdConf;
	}
	String EnterConfPwdMiss()
	{
		return vEnterConfPwdMiss;
	}
	String UsageRoll()
	{
		return vUsageRoll;
	}
	String MaxDice()
	{
		return vMaxDice;
	}
	String Rolled()
	{
		return vRolled;
	}
	String Of()
	{
		return vOf;
	}
	String SideGot()
	{
		return vSideGot;
	}
	String CannotCreateItem()
	{
		return vCannotCreateItem;
	}
	String ItemNotExist()
	{
		return vItemNotExist;
	}
	String SpawnedItem()
	{
		return vSpawnedItem;
	}
	String CannotEquip()
	{
		return vCannotEquip;
	}
	String Equipped()
	{
		return vEquipped;
	}
	String Page()
	{
		return vPage;
	}
	String PartyFull()
	{
		return vPartyFull;
	}
	String Inviting()
	{
		return vInviting;
	}
	String ToJoin()
	{
		return vToJoin;
	}
	String IRequestingToJoin()
	{
		return vIRequestingToJoin;
	}
	String Sparty()
	{
		return vSparty;
	}
	String UsageSaveChat()
	{
		return vUsageSaveChat;
	}
	String CannotFind()
	{
		return vCannotFind;
	}
	String YouReleased()
	{
		return vYouReleased;
	}
	String ModModeOn()
	{
		return vModModeOn;
	}
	String ModModeOff()
	{
		return vModModeOff;
	}
	String Dropped()
	{
		return vDropped;
	}
	String Deleted()
	{
		return vDeleted;
	}
	String FullStash()
	{
		return vFullStash;
	}
	String IsIn()
	{
		return vIsIn;
	}
	String Drop()
	{
		return vDrop;
	}
	String HotkeyF()
	{
		return vHotkeyF;
	}
	String SetAs()
	{
		return vSetAs;
	}
	String Remove()
	{
		return vRemove;
	}
	String Where()
	{
		return vWhere;
	}
	String PM()
	{
		return vPM;
	}
	String BlockList()
	{
		return vBlockList;
	}
	String YouWonded()
	{
		return vYouWonded;
	}
	String YouRecovered()
	{
		return vYouRecovered;
	}
	String SetToRecovered()
	{
		return vSetToRecovered;
	}
	String ResHome()
	{
		return vResHome;
	}
	String PosIs()
	{
		return vPosIs;
	}
	String WoundPet()
	{
		return vWoundPet;
	}
	String EntCharName()
	{
		return vEntCharName;
	}
	String CharNMiss()
	{
		return vCharNMiss;
	}
	String NoSrv()
	{
		return vNoSrv;
	}
	String Connecte()
	{
		return vConnecte;
	}
	String Banned()
	{
		return vBanned;
	}
	String DaysLeft()
	{
		return vDaysLeft;
	}
	String DasLeft()
	{
		return vDasLeft;
	}
	String Connected()
	{
		return vConnected;
	}
	String OurFail()
	{
		return vOurFail;
	}
	String PleaseLatest()
	{
		return vPleaseLatest;
	}
	String Unavail()
	{
		return vUnavail;
	}
	String YouDisconnected()
	{
		return vYouDisconnected;
	}
	String Reconecting()
	{
		return vReconecting;
	}
	String Disconection()
	{
		return vDisconection;
	}
	String ConnectionLostR()
	{
		return vConnectionLostR;
	}
	String ConnectionLost()
	{
		return vConnectionLost;
	}
	String ConnectionLostS()
	{
		return vConnectionLostS;
	}
	String Reconnecte()
	{
		return vReconnecte;
	}
	String CannotSend()
	{
		return vCannotSend;
	}
	String SendTo()
	{
		return vSendTo;
	}
	String IsFriend()
	{
		return vIsFriend;
	}
	String IsBlocked()
	{
		return vIsBlocked;
	}
	String HasArrived()
	{
		return vHasArrived;
	}
	String ErrNotice()
	{
		return vErrNotice;
	}
	String SentErrors()
	{
		return vSentErrors;
	}
	String Disconnected()
	{
		return vDisconnected;
	}
	String TimedOut()
	{
		return vTimedOut;
	}
	String HasLeft()
	{
		return vHasLeft;
	}
	String Egg1()
	{
		return vEgg1;
	}
	String Egg2()
	{
		return vEgg2;
	}
	String Egg3()
	{
		return vEgg3;
	}
	String Egg4()
	{
		return vEgg4;
	}
	String Egg5()
	{
		return vEgg5;
	}
	String PMember()
	{
		return vPMember;
	}
	String HasDisconnected()
	{
		return vHasDisconnected;
	}
	String KickedAdmin()
	{
		return vKickedAdmin;
	}
	String DisByUser()
	{
		return vDisByUser;
	}
	String DisByAnother()
	{
		return vDisByAnother;
	}
	String HasJoinedP()
	{
		return vHasJoinedP;
	}
	String HasLeftP()
	{
		return vHasLeftP;
	}
	String AlreadyInP()
	{
		return vAlreadyInP;
	}
	String YouLeftP()
	{
		return vYouLeftP;
	}
	String YouHaveTamed()
	{
		return vYouHaveTamed;
	}
	String An()
	{
		return vAn;
	}
	String A()
	{
		return vA;
	}
	String HaveYouTamed()
	{
		return vHaveYouTamed;
	}
	String IsWonded()
	{
		return vIsWonded;
	}
	String RecoverWound()
	{
		return vRecoverWound;
	}
	String Moved()
	{
		return vMoved;
	}
	String IntoStash()
	{
		return vIntoStash;
	}
	String Dimension()
	{
		return vDimension;
	}
	String IstOnline()
	{
		return vIstOnline;
	}
	String SrvRestartingIn()
	{
		return vSrvRestartingIn;
	}
	String PleaseLogOut()
	{
		return vPleaseLogOut;
	}
	String InvUoP()
	{
		return vInvUoP;
	}
	String UserAlready()
	{
		return vUserAlready;
	}
	String AccCreated()
	{
		return vAccCreated;
	}
	String UserUse()
	{
		return vUserUse;
	}
	String PassChanged()
	{
		return vPassChanged;
	}
	String PassChangeFail()
	{
		return vPassChangeFail;
	}
	String CharLoadFail()
	{
		return vCharLoadFail;
	}
	String CharEditFail()
	{
		return vCharEditFail;
	}
	String Hass()
	{
		return vHass;
	}
	String InvYou()
	{
		return vInvYou;
	}
	String Rquested()
	{
		return vRquested;
	}
	String TJoinP()
	{
		return vTJoinP;
	}
	String Actions()
	{
		return vActions;
	}
	String PlopDown()
	{
		return vPlopDown;
	}
	String Lay()
	{
		return vLay;
	}
	String Sit()
	{
		return vSit;
	}
	String RollOver()
	{
		return vRollOver;
	}
	String LayDown()
	{
		return vLayDown;
	}
	String SideLay()
	{
		return vSideLay;
	}
	String StopCrouch()
	{
		return vStopCrouch;
	}
	String Point()
	{
		return vPoint;
	}
	String Stretch()
	{
		return vStretch;
	}
	String Headswing()
	{
		return vHeadswing;
	}
	String Headbang()
	{
		return vHeadbang;
	}
	String Buttswing()
	{
		return vButtswing;
	}
	String Wingwave()
	{
		return vWingwave;
	}
	String Moonwalk()
	{
		return vMoonwalk;
	}
	String Thriller()
	{
		return vThriller;
	}
	String Rofl()
	{
		return vRofl;
	}
	String Roar()
	{
		return vRoar;
	}
	String Curl()
	{
		return vCurl;
	}
	String Faint()
	{
		return vFaint;
	}
	String SecondaryAct()
	{
		return vSecondaryAct;
	}
	String NodHead()
	{
		return vNodHead;
	}
	String ShakeHead()
	{
		return vShakeHead;
	}
	String SlowNodHead()
	{
		return vSlowNodHead;
	}
	String ShakeSlowHead()
	{
		return vShakeSlowHead;
	}
	String HeadTilt()
	{
		return vHeadTilt;
	}
	String Lick()
	{
		return vLick;
	}
	String StopLick()
	{
		return vStopLick;
	}
	String Nuzzle()
	{
		return vNuzzle;
	}
	String StopNuzzle()
	{
		return vStopNuzzle;
	}
	String Sniff()
	{
		return vSniff;
	}
	String TailFlick()
	{
		return vTailFlick;
	}
	String Laugh()
	{
		return vLaugh;
	}
	String Chuckle()
	{
		return vChuckle;
	}
	String Emotes()
	{
		return vEmotes;
	}
	String Crouch()
	{
		return vCrouch;
	}
	String LogSaved()
	{
		return vLogSaved;
	}
};

#endif