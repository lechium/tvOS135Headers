/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:49 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CPBitmapStore;

@interface UIStatusBarCache : NSObject {

	CPBitmapStore* _store;
	BOOL _writeable;

}

@property (getter=isWriteable,nonatomic,readonly) BOOL writeable;              //@synthesize writeable=_writeable - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)imageNamed:(id)arg1 forGroup:(id)arg2 withScale:(double)arg3 ;
-(void)removeImagesInGroup:(id)arg1 ;
-(void)cacheImage:(id)arg1 named:(id)arg2 forGroup:(id)arg3 ;
-(BOOL)isWriteable;
@end
