/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSSegmentedCell.h"

@class NSMutableDictionary;

@interface LazyMenuSegmentedCell : NSSegmentedCell
{
    id _lazyMenuBlock;
    NSMutableDictionary *_loadedMenus;
}

- (id)menuForSegment:(long long)arg1;
- (void)setLazyMenuBlock:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
