/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/StreamingZip.framework/StreamingZip
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StreamingZip/StreamingUnzipDelegateProtocol.h>

@protocol SZExtractorDelegate;
@interface SZExtractorInternalDelegate : NSObject <StreamingUnzipDelegateProtocol> {

	id<SZExtractorDelegate> delegate;

}

@property (__weak) id<SZExtractorDelegate> delegate; 
-(id<SZExtractorDelegate>)delegate;
-(void)setDelegate:(id<SZExtractorDelegate>)arg1 ;
-(void)setExtractionProgress:(double)arg1 ;
-(void)extractionCompleteAtArchivePath:(id)arg1 ;
-(void)extractionEnteredPassThroughMode;
@end

