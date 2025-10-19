#ifndef __GameDefines_h_
#define __GameDefines_h_

// 1 to enable, 0 to disable

// --- CORE GAME LIMITS (WARNINGS) ---
// BIG FAT WARNING:
// DO NOT CHANGE MAX_EQUIP ON A SERVER THAT IS ALREADY RUNNING
#define MAX_EQUIP 10 // 9 is max recommended
#define MAX_STASH 50
#define MAX_PARTYMEMBERS 6

// BIG FAT WARNING:
// DO NOT DECREASE THESE VALUES ONCE SET. WILL LEAD TO CRASHES
// Read the names of these defines and they'll make sense (Game Max ____)
#define GMAXBODIES 7
#define GMAXHEADS 25
#define GMAXMANES 30
#define GMAXTAILS 24
#define GMAXWINGS 9
#define GMAXTUFTS 27
#define GMAXBODYMARKS 27
#define GMAXHEADMARKS 27
#define GMAXTAILMARKS 27

// --- CHAT COLORS (RGB Strings) ---
#define CHAT_LOCAL_COLOUR_TOP "1 1 1"
#define CHAT_LOCAL_COLOUR_BOTTOM "1 0.8 0"
#define CHAT_GENERAL_COLOUR_TOP "1 1 1"
#define CHAT_GENERAL_COLOUR_BOTTOM "0.6 0.1 0.8"
#define CHAT_PARTY_COLOUR_TOP "1 1 1"
#define CHAT_PARTY_COLOUR_BOTTOM "1 0.4 0"

// --- STANDARD TEXTS ---
#define USER_ADMIN_TEXT "ADMIN"
#define USER_MOD_TEXT "MOD"

// --- MAP / DEFAULT SETTINGS ---
#define MAP_DEFAULT "Default"
// x,z spawn location
#define MAP_SPAWN_X 2500 
#define MAP_SPAWN_Z 2500 

// --- OVERALL LIGHTING (R, G, B) ---
#define AMBIENT_LIGHT_OUTDOOR_R 0.75
#define AMBIENT_LIGHT_OUTDOOR_G 0.75
#define AMBIENT_LIGHT_OUTDOOR_B 0.75
#define AMBIENT_LIGHT_INDOOR_R 0.5
#define AMBIENT_LIGHT_INDOOR_G 0.5
#define AMBIENT_LIGHT_INDOOR_B 0.5

// --- ENCRYPTION & CUSTOMIZATION ---
// NOTE: Use a unique formula.
#define XORKEY(i) (67*(i%3)+9*(i%5)+9) // Change this key like: 3*(i%2)+3*(i%7)+4
#define CUSTOMCRITTERS 1 // allows users custom critters (1 or 0)
#define MAXDIMS 10 // Maximum number of dims

// --- NETWORK SETTINGS ---
#define SERVER_PORT 40000
#define MAIN_SERVER_PORT 40010

// enter your server address
#define MAIN_SERVER_IP "127.0.0.1" 
// enter a key
#define SERVER_PASSWORD "67iKl9-BnY" 

#endif
