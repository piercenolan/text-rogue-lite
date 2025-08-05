/* Nolan Pierce - Text-Based Rogue-Lite
 * 
 * Overview:
 * Command-line game allowing the user to traverse a procedurally generated dungeon,
 * battle enemies, and find loot!
 *  
 * Features:
 * - Procedurally generated random map for each level of the dungeon
 * - Enemies for the player to navigate around and battle
 * - Loot from enemies and randomly spawned chests
 * - Combat and inventory system
 * 
 * Short-Term Future Goals:
 * - AI movement system for enemies
 * - "Fog of War": Forces players to explore the entire level
 * - Combat classes, allowing users to specialize in certain element types
 */
#include <iostream>
#include <string>

#include "Headers/player.h"
#include "Headers/map.h"
#include "Headers/game.h"
#include "Headers/helpers.h"

int main() {
    Game game;
    game.askYesNo("Would you like to start a new game?");
    return 0;
}
