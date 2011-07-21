//
//  VISSTAAppDelegate.h
//  VISSTA
//
//  Created by Greg on 7/20/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class VISSTAViewController;

@interface VISSTAAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet VISSTAViewController *viewController;

@end
