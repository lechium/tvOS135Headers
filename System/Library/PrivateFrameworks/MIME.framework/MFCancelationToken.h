/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:14 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFCancelable.h>
#import <libobjc.A.dylib/MFCancelationToken.h>

@protocol MFCancelationToken <NSObject>
@property (getter=isCanceled,readonly) BOOL canceled; 
@required
-(BOOL)isCanceled;

@end


@class NSLock, NSMutableArray, NSString;

@interface MFCancelationToken : NSObject <MFCancelable, MFCancelationToken> {

	NSLock* _lock;
	NSMutableArray* _blocks;
	BOOL _isCanceled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isCanceled,readonly) BOOL canceled; 
+(id)tokenWithCancelationBlock:(/*^block*/id)arg1 ;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(void)cancel;
-(BOOL)isCanceled;
-(void)addCancelationBlock:(/*^block*/id)arg1 ;
-(void)addCancelable:(id)arg1 ;
-(id)_nts_cancel;
@end

