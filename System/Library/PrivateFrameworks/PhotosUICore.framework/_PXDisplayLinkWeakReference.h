/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:04 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _PXDisplayLinkWeakReference : NSObject {

	id _object;
	SEL _selector;

}

@property (nonatomic,__weak,readonly) id object;              //@synthesize object=_object - In the implementation block
@property (nonatomic,readonly) SEL selector;                  //@synthesize selector=_selector - In the implementation block
-(SEL)selector;
-(id)object;
-(void)handleDisplayLink:(id)arg1 ;
-(id)initWithObject:(id)arg1 selector:(SEL)arg2 ;
@end

