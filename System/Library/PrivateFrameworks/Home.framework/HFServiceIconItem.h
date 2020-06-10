/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItem.h>

@protocol HFIconDescriptor;
@interface HFServiceIconItem : HFItem {

	id<HFIconDescriptor> _iconDescriptor;

}

@property (nonatomic,readonly) id<HFIconDescriptor> iconDescriptor;              //@synthesize iconDescriptor=_iconDescriptor - In the implementation block
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id<HFIconDescriptor>)iconDescriptor;
-(id)initWithIconDescriptor:(id)arg1 ;
@end

