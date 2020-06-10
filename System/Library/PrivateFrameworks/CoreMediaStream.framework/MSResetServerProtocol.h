/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:12 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMediaStream/CoreMediaStream-Structs.h>
#import <CoreMediaStream/MSStreamsProtocol.h>

@interface MSResetServerProtocol : MSStreamsProtocol {

	MSRSPCContext* _context;

}
-(void)dealloc;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)abort;
-(id)initWithPersonID:(id)arg1 baseURL:(id)arg2 ;
-(void)_coreProtocolDidFailAuthenticationError:(id)arg1 ;
-(void)_coreProtocolDidFinishError:(id)arg1 ;
-(void)resetServerState;
@end
