//
//  AppDelegate.h
//  BGSample
//
//  Created by Noriaki Misawa on 2014/05/20.
//  Copyright (c) 2014年 Misawa.NET All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>
{
    UIBackgroundTaskIdentifier bgTask;
    int count;
    
}

@property (strong, nonatomic) UIWindow *window;

@end
