//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UITextFieldDelegate-Protocol.h"

@class MISSING_TYPE;

@interface _TtC6Arcade22HttpTemplateController : NSObject <UITextFieldDelegate>
{
    MISSING_TYPE *actionRunner;	// 8 = 0x8
    MISSING_TYPE *templateAction;	// 16 = 0x10
    MISSING_TYPE *actionSender;	// 24 = 0x18
    MISSING_TYPE *textFields;	// 56 = 0x38
    MISSING_TYPE *okAction;	// 64 = 0x40
    MISSING_TYPE *hasRequiredParameters;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000010008ed6c
- (id)init;	// IMP=0x0000000100090198
- (void)textFieldDidChange:(id)arg1;	// IMP=0x00000001000900d8
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x000000010009001c
- (void)dealloc;	// IMP=0x000000010008ecd4

@end
