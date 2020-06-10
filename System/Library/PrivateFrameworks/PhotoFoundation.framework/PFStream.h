/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PFStream <NSObject,NSLocking>
@required
-(void)closeStream;
-(BOOL)openStream;
-(long long)streamLength;
-(long long)streamPosition;
-(BOOL)rewindStream;
-(BOOL)rewindStream:(long long)arg1;
-(BOOL)advanceStream;
-(BOOL)advanceStream:(long long)arg1 distanceMoved:(long long*)arg2;
-(id)getStreamError;
-(unsigned long long)preferredStreamBlockSize;

@end

