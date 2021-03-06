/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:07 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMDDataStreamBulkSendListener;
@class NSString;

@interface HMDPendingBulkSendListener : NSObject {

	id<HMDDataStreamBulkSendListener> _listener;
	NSString* _fileType;

}

@property (assign,nonatomic,__weak) id<HMDDataStreamBulkSendListener> listener;              //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) NSString * fileType;                                            //@synthesize fileType=_fileType - In the implementation block
-(id<HMDDataStreamBulkSendListener>)listener;
-(void)setListener:(id<HMDDataStreamBulkSendListener>)arg1 ;
-(NSString *)fileType;
-(void)setFileType:(NSString *)arg1 ;
-(id)initWithListener:(id)arg1 fileType:(id)arg2 ;
@end

