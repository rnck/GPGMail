/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSButton.h"

#import "NSMenuDelegate.h"

@class NSMenu, NSString;

@interface ClippedItemsIndicator : NSButton <NSMenuDelegate>
{
    id <ClippedItemsIndicatorDelegate> _delegate;
    NSMenu *_menu;
}

@property(retain, nonatomic) NSMenu *menu; // @synthesize menu=_menu;
@property(nonatomic) __weak id <ClippedItemsIndicatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)menuDidClose:(id)arg1;
- (void)_popUpMenu;
- (void)mouseDown:(id)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
