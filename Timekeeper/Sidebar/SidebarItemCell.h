#import <Cocoa/Cocoa.h>

@interface SidebarItemCell : NSButtonCell

// Those methods should be overridden in subclasses
- (void)drawInteriorWithFrame:(NSRect)cellFrame inView:(NSView *)controlView;
- (void)drawImage:(NSImage *)image withFrame:(NSRect)frame inView:(NSView *)controlView;
- (void)drawSelectionWithFrame:(NSRect)frame inView:(NSView *)view;
- (void)drawBackgroundWithFrame:(NSRect)frame inView:(NSView *)view;

- (NSShadow *)shadow;

@end
