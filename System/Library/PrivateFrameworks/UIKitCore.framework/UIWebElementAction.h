/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:11 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSString;

@interface UIWebElementAction : NSObject {

	NSString* _title;
	/*^block*/id _actionHandler;
	/*^block*/id _dismissalHandler;
	int _type;

}

@property (nonatomic,readonly) int type;                     //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) id dismissalHandler;              //@synthesize dismissalHandler=_dismissalHandler - In the implementation block
+(id)standardElementActionWithType:(int)arg1 customTitle:(id)arg2 context:(id)arg3 ;
+(id)customElementActionWithTitle:(id)arg1 actionHandler:(/*^block*/id)arg2 ;
+(id)standardElementActionWithType:(int)arg1 ;
-(void)dealloc;
-(int)type;
-(id)_title;
-(void)setDismissalHandler:(id)arg1 ;
-(id)dismissalHandler;
-(id)initWithTitle:(id)arg1 actionHandler:(/*^block*/id)arg2 type:(int)arg3 ;
-(void)_runActionWithElement:(id)arg1 targetURL:(id)arg2 documentView:(id)arg3 interactionLocation:(CGPoint)arg4 ;
@end

