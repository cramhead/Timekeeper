//
//  NRDAppDelegate.h
//  Timekeeper
//
//  Created by Paul Schoenfelder on 7/3/13.
//  Copyright (c) 2013 Paul Schoenfelder. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "Sidebar.h"
#import "SNRHUDKit.h"

@interface TimekeeperAppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet SNRHUDWindow *window;
@property (weak)   IBOutlet Sidebar      *sidebar;
@property (weak)   IBOutlet NSTextField  *label;

@end
