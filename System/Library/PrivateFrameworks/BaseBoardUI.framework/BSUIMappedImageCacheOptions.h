/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoardUI/BaseBoardUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol BSPathProviding;
@interface BSUIMappedImageCacheOptions : NSObject <NSCopying> {

	id<BSPathProviding> _containerPathProvider;

}

@property (nonatomic,retain) id<BSPathProviding> containerPathProvider;              //@synthesize containerPathProvider=_containerPathProvider - In the implementation block
+(id)optionsWithContainerPathProvider:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setContainerPathProvider:(id<BSPathProviding>)arg1 ;
-(id<BSPathProviding>)containerPathProvider;
@end
