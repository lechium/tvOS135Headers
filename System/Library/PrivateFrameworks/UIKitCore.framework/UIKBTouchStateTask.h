/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:36 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIKBTouchState;

@interface UIKBTouchStateTask : NSObject <NSCopying> {

	UIKBTouchState* _touchState;
	/*^block*/id _task;
	BOOL _isBusy;

}

@property (nonatomic,retain,readonly) UIKBTouchState * touchState;              //@synthesize touchState=_touchState - In the implementation block
@property (nonatomic,copy,readonly) id task;                                    //@synthesize task=_task - In the implementation block
@property (assign,nonatomic) BOOL isBusy;                                       //@synthesize isBusy=_isBusy - In the implementation block
+(id)touchStateTaskForTouchState:(id)arg1 andTask:(/*^block*/id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(long long)compare:(id)arg1 ;
-(id)task;
-(void)setIsBusy:(BOOL)arg1 ;
-(BOOL)isBusy;
-(id)initWithTouchState:(id)arg1 andTask:(/*^block*/id)arg2 ;
-(UIKBTouchState *)touchState;
@end
