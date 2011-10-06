//
//  GameController.h
//  QuartzFeedback
//
//  Created by david on 5/12/08.
//  Copyright 2008 n/a. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TransactedGameController.h"
#import "StandardGame.h"
#import "LevelGame.h"

typedef enum {
	LevelledGameType = 0,
	PuzzleGameType = 1,
	StandardGameType = 2,
} GameControllerType;


// Initializes a particular game controller which is then used
// to control the particular game being played by the user.
@interface GameController : NSObject 
{
}


+ (void)Initialize:(GameControllerType)type;
+ (void)LoadGameState;
+ (void)PauseGame;
+ (void)ResumeGame;
+ (void)QuitGame;
+ (BOOL)SaveGame;
+ (BOOL)LoadGame:(GameControllerType)type;

+ (BOOL)AdvanceLevel;
+ (BOOL)AdvanceLevelgroup;

+ (void)PlayerWonLevel;
+ (void)PlayerWonLevelgroup;

+ (void)AddPointsToGame:(int)points;
+ (void)RemovePointsFromGame:(int)points;

+ (int)GetTileWidth;
+ (int)GetLevelgroupIndex;

+ (void)CompleteMove;
+ (BOOL)ReverseMove;
+ (NSArray *)GetTiles;
+ (Level *)GetCurrentLevel;
+ (int)GetMaximumTilesForCurrentLevel;
+ (short)GetMinimumWinningTileCount;

+ (TileMove *)TryNextMove:(int)fromIndex to:(int)toIndex;
+ (BOOL)SetNextMove:(int)fromIndex to:(int)toIndex;

+ (void)JewelLineGoalCreate:(PieceType)pieceType forJewel:(BonusItemType)jewel forGoal:(ConsecutiveGoal *)goal;

@end
