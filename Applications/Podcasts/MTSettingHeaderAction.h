//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MTSettingHeaderAction : NSObject
{
    CDUnknownBlockType _actionHandler;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
}

+ (id)headerActionWithTitle:(id)arg1 actionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010017aa14
- (void).cxx_destruct;	// IMP=0x000000010017abc4
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
- (void)performAction;	// IMP=0x000000010017ab30
- (id)initWithTitle:(id)arg1 actionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010017aa88

@end

