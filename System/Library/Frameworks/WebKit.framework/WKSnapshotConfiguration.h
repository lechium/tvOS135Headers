/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:20 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber;

@interface WKSnapshotConfiguration : NSObject <NSCopying> {

	BOOL _afterScreenUpdates;
	NSNumber* _snapshotWidth;
	CGRect _rect;

}

@property (assign,nonatomic) CGRect rect;                          //@synthesize rect=_rect - In the implementation block
@property (nonatomic,copy) NSNumber * snapshotWidth;               //@synthesize snapshotWidth=_snapshotWidth - In the implementation block
@property (assign,nonatomic) BOOL afterScreenUpdates;              //@synthesize afterScreenUpdates=_afterScreenUpdates - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(CGRect)rect;
-(void)setRect:(CGRect)arg1 ;
-(void)setAfterScreenUpdates:(BOOL)arg1 ;
-(NSNumber *)snapshotWidth;
-(void)setSnapshotWidth:(NSNumber *)arg1 ;
-(BOOL)afterScreenUpdates;
@end

