/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFCardSectionEngagementFeedback.h>

@class NSData;

@interface SFMapCardSectionEngagementFeedback : SFCardSectionEngagementFeedback {

	NSData* _modifiedPlacemarkData;

}

@property (nonatomic,retain) NSData * modifiedPlacemarkData;              //@synthesize modifiedPlacemarkData=_modifiedPlacemarkData - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)modifiedPlacemarkData;
-(void)setModifiedPlacemarkData:(NSData *)arg1 ;
@end

