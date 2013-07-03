//
//  NRDAppDelegate.m
//  Timekeeper
//
//  Created by Paul Schoenfelder on 7/3/13.
//  Copyright (c) 2013 Paul Schoenfelder. All rights reserved.
//

#import "TimekeeperAppDelegate.h"

@implementation TimekeeperAppDelegate

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification
{
    [self.sidebar addItemWithImage:self.imgStarPushed  alternateImage:self.imgStar  target:self action:@selector(onStar:)];
    [self.sidebar addItemWithImage:self.imgWatchPushed alternateImage:self.imgWatch target:self action:@selector(onWatch:)];
    [self.sidebar addItemWithImage:self.imgTrashPushed alternateImage:self.imgTrash target:self action:@selector(onTrash:)];
    
    self.sidebar.allowsEmptySelection = NO;
}

- (IBAction)onStar:(id)sender {
    [self.label setStringValue:@"Star"];
}
- (IBAction)onWatch:(id)sender {
    [self.label setStringValue:@"Watch"];
}
- (IBAction)onTrash:(id)sender {
    [self.label setStringValue:@"Trash"];
}

- (NSImage *)imgStar {
    return [NSImage imageNamed:@"star"];
};
- (NSImage *)imgStarPushed {
    return [NSImage imageNamed:@"star-pushed"];
}
- (NSImage *)imgWatch {
    return [NSImage imageNamed:@"watch"];
}
- (NSImage *)imgWatchPushed {
    return [NSImage imageNamed:@"watch-pushed"];
}
- (NSImage *)imgTrash {
    return [NSImage imageNamed:@"trash"];
}
- (NSImage *)imgTrashPushed {
    return [NSImage imageNamed:@"trash-pushed"];
}

@end
