#import <Cocoa/Cocoa.h>

@class Sidebar;
@class SidebarItemCell;

@interface Sidebar : NSView
@property (strong) NSMatrix *matrix;

@property (strong, nonatomic) id target;
@property (nonatomic) SEL action;

// Customisation
@property (nonatomic) NSSize cellSize;
@property (nonatomic) NSColor *backgroundColor;
@property (nonatomic) NSScrollerKnobStyle scrollerKnobStyle;
@property (nonatomic) SidebarItemCell *selectedItem;
@property (nonatomic) int selectedIndex;
@property (nonatomic) BOOL allowsEmptySelection;

+ (Class)sidebarItemCellClass;

// Add/Remove Cells
- (SidebarItemCell *)addItemWithImage:(NSImage *)image target:(id)target action:(SEL)action;
- (SidebarItemCell *)addItemWithImage:(NSImage *)image alternateImage:(NSImage *)alternateImage target:(id)target action:(SEL)action;

- (SidebarItemCell *)addItemWithImage:(NSImage *)image;
- (SidebarItemCell *)addItemWithImage:(NSImage *)image alternateImage:(NSImage *)alternateImage;

- (void)removeRow:(NSInteger)row;

// Select Cells
- (void)deselectAllItems;

@end
