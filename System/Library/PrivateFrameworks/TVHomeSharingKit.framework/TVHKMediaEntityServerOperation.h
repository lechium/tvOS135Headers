/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:36 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingServices/TVHSAsynchronousOperation.h>

@class TVHKMediaEntityServer, NSError, TVHSAsynchronousWorkToken;

@interface TVHKMediaEntityServerOperation : TVHSAsynchronousOperation {

	TVHKMediaEntityServer* _mediaEntityServer;
	NSError* _error;
	TVHSAsynchronousWorkToken* _asyncWorkToken;

}

@property (nonatomic,retain) TVHKMediaEntityServer * mediaEntityServer;               //@synthesize mediaEntityServer=_mediaEntityServer - In the implementation block
@property (nonatomic,copy) NSError * error;                                           //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) TVHSAsynchronousWorkToken * asyncWorkToken;              //@synthesize asyncWorkToken=_asyncWorkToken - In the implementation block
-(id)init;
-(NSError *)error;
-(void)cancel;
-(void)setError:(NSError *)arg1 ;
-(TVHKMediaEntityServer *)mediaEntityServer;
-(void)setMediaEntityServer:(TVHKMediaEntityServer *)arg1 ;
-(id)initWithMediaEntityServer:(id)arg1 ;
-(void)setAsyncWorkToken:(TVHSAsynchronousWorkToken *)arg1 ;
-(TVHSAsynchronousWorkToken *)asyncWorkToken;
@end

