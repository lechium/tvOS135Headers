/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PXImageExtraction : NSObject {

	BOOL _cancelled;

}

@property (setter=_setCancelled:,getter=isCancelled) BOOL cancelled;              //@synthesize cancelled=_cancelled - In the implementation block
-(void)cancel;
-(BOOL)isCancelled;
-(void)_setCancelled:(BOOL)arg1 ;
@end
