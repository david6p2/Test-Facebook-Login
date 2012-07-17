//
//  AppDelegate.h
//  TestPiitriLogin
//
//  Created by LSR Marketing Service on 16/07/12.
//  Copyright (c) 2012 LSR Marketing Service. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FBConnect.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate,FBSessionDelegate>
{
    Facebook *facebook;
}
@property (strong, nonatomic) UIWindow *window;
@property (nonatomic, retain) Facebook *facebook;

@end
