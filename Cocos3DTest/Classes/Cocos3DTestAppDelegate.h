/**
 *  Cocos3DTestAppDelegate.h
 *  Cocos3DTest
 *
 *  Created by Anil Punjabi on 4/30/12.
 *  Copyright __MyCompanyName__ 2012. All rights reserved.
 */

#import <UIKit/UIKit.h>
#import "CCNodeController.h"
#import "CC3Scene.h"

@interface Cocos3DTestAppDelegate : NSObject <UIApplicationDelegate> {
	UIWindow* window;
	CCNodeController* viewController;
}

@property (nonatomic, retain) UIWindow* window;

@end
