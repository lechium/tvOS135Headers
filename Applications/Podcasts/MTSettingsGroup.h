//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MTSettingHeaderAction, NSArray, NSString;

@interface MTSettingsGroup : NSObject
{
    NSString *_groupTitle;	// 8 = 0x8
    NSString *_groupFooter;	// 16 = 0x10
    CDUnknownBlockType _settingsHandler;	// 24 = 0x18
    MTSettingHeaderAction *_headerAction;	// 32 = 0x20
    double _customHeaderHeight;	// 40 = 0x28
    NSArray *_groupSettings;	// 48 = 0x30
}

+ (id)groupWithTitle:(id)arg1 footerText:(id)arg2 settingsHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100119b60
+ (id)groupWithTitle:(id)arg1 footerText:(id)arg2 settings:(id)arg3;	// IMP=0x000000010011999c
- (void).cxx_destruct;	// IMP=0x0000000100119de4
@property(copy, nonatomic) NSArray *groupSettings; // @synthesize groupSettings=_groupSettings;
@property(nonatomic) double customHeaderHeight; // @synthesize customHeaderHeight=_customHeaderHeight;
@property(retain, nonatomic) MTSettingHeaderAction *headerAction; // @synthesize headerAction=_headerAction;
@property(copy, nonatomic) CDUnknownBlockType settingsHandler; // @synthesize settingsHandler=_settingsHandler;
@property(copy, nonatomic) NSString *groupFooter; // @synthesize groupFooter=_groupFooter;
@property(copy, nonatomic) NSString *groupTitle; // @synthesize groupTitle=_groupTitle;

@end

