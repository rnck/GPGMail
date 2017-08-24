//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class MCTaskHandlerOperation, NSDate, NSOperationQueue;

@interface MCTaskHandler : NSObject
{
    MCTaskHandlerOperation *_operation;	// 8 = 0x8
    BOOL _isCleaningUp;	// 16 = 0x10
    id <MCHandlerDelegate> _delegate;	// 24 = 0x18
    NSOperationQueue *_queue;	// 32 = 0x20
    long long _priority;	// 40 = 0x28
    NSDate *_cancelTime;	// 48 = 0x30
}

+ (id)keyPathsForValuesAffectingPriority;	// IMP=0x00000000000a7702
+ (id)log;	// IMP=0x00000000000a7490
@property(retain, nonatomic) NSDate *cancelTime; // @synthesize cancelTime=_cancelTime;
@property(nonatomic) BOOL isCleaningUp; // @synthesize isCleaningUp=_isCleaningUp;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <MCHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x00000000000a7fed
- (id)newCleanUpOperation;	// IMP=0x00000000000a7f16
- (void)cleanUp;	// IMP=0x00000000000a7dc5
- (void)_operationDidFinish:(id)arg1;	// IMP=0x00000000000a7a24
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000a78bb
- (long long)_determineQOSForOperation:(id)arg1;	// IMP=0x00000000000a7889
@property(retain, nonatomic) MCTaskHandlerOperation *operation;
- (void)dealloc;	// IMP=0x00000000000a760a
- (id)init;	// IMP=0x00000000000a74ef

@end
