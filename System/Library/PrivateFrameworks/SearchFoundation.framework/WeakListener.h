/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFFeedbackListener;
@interface WeakListener : NSObject {

	id<SFFeedbackListener> _weakListener;

}

@property (nonatomic,readonly) id<SFFeedbackListener> strongListener; 
-(id)initWithListener:(id)arg1 ;
-(id<SFFeedbackListener>)strongListener;
@end

