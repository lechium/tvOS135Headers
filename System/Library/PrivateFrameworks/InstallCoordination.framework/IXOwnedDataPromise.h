/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:04 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InstallCoordination/IXDataPromise.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, IXOwnedDataPromiseSeed;

@interface IXOwnedDataPromise : IXDataPromise <NSSecureCoding> {

	NSURL* _stagedPath;

}

@property (nonatomic,retain) IXOwnedDataPromiseSeed * seed; 
@property (nonatomic,retain) NSURL * stagedPath;                         //@synthesize stagedPath=_stagedPath - In the implementation block
@property (nonatomic,readonly) NSURL * stagingBaseDir; 
-(NSURL *)stagingBaseDir;
-(void)setStagedPath:(NSURL *)arg1 ;
-(Class)seedClass;
-(NSURL *)stagedPath;
@end
