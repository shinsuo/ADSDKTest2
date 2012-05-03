//
//  AppDelegate.h
//  TestGame
//
//  Created by Shin Suo on 12-5-3.
//  Copyright CocoaChina 2012年. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RootViewController;

@interface AppDelegate : NSObject <UIApplicationDelegate> {
	UIWindow			*window;
	RootViewController	*viewController;
}

@property (nonatomic, retain) UIWindow *window;

@end
