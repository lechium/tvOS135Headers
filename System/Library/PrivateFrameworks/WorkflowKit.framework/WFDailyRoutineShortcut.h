/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:36 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, WFImage, WFDailyRoutineShortcutSetupFlow;

@interface WFDailyRoutineShortcut : NSObject {

	NSString* _title;
	NSString* _subtitle;
	WFImage* _bannerImage;
	WFDailyRoutineShortcutSetupFlow* _setupFlow;

}

@property (nonatomic,copy,readonly) NSString * title;                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                                 //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) WFImage * bannerImage;                               //@synthesize bannerImage=_bannerImage - In the implementation block
@property (nonatomic,readonly) WFDailyRoutineShortcutSetupFlow * setupFlow;              //@synthesize setupFlow=_setupFlow - In the implementation block
-(NSString *)title;
-(NSString *)subtitle;
-(WFDailyRoutineShortcutSetupFlow *)setupFlow;
-(WFImage *)bannerImage;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 bannerImage:(id)arg3 setupFlow:(id)arg4 ;
@end
