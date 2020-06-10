/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:11 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSDate;

@interface CMElevationData : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long fRecordId;
	NSUUID* fSourceId;
	NSDate* fStartDate;
	NSDate* fEndDate;
	unsigned long long fElevationAscended;
	unsigned long long fElevationDescended;
	long long fSource;

}

@property (nonatomic,readonly) unsigned long long recordId; 
@property (nonatomic,readonly) NSUUID * sourceId; 
@property (nonatomic,readonly) long long source; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) unsigned long long elevationAscended; 
@property (nonatomic,readonly) unsigned long long elevationDescended; 
+(BOOL)supportsSecureCoding;
+(id)sourceName:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)source;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(unsigned long long)recordId;
-(NSUUID *)sourceId;
-(unsigned long long)elevationAscended;
-(unsigned long long)elevationDescended;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 elevationAscended:(unsigned long long)arg3 elevationDescended:(unsigned long long)arg4 source:(long long)arg5 recordId:(unsigned long long)arg6 sourceId:(id)arg7 ;
-(id)initWithSignificantElevationSample:(id)arg1 ;
@end

