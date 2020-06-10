/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:07 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NSCollectionLayoutGroupCustomItem : NSObject <NSCopying> {

	long long _zIndex;
	CGRect _frame;

}

@property (nonatomic,readonly) CGRect frame;                  //@synthesize frame=_frame - In the implementation block
@property (nonatomic,readonly) long long zIndex;              //@synthesize zIndex=_zIndex - In the implementation block
+(id)customItemWithFrame:(CGRect)arg1 zIndex:(long long)arg2 ;
+(id)customItemWithFrame:(CGRect)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGRect)frame;
-(long long)zIndex;
-(id)initWithFrame:(CGRect)arg1 zIndex:(long long)arg2 ;
@end
