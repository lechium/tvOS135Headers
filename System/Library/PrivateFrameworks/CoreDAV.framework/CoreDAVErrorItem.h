/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren, CoreDAVLeafItem;

@interface CoreDAVErrorItem : CoreDAVItem {

	CoreDAVItemWithNoChildren* _numberOfMatchesWithinLimits;
	CoreDAVItemWithNoChildren* _validSyncToken;
	CoreDAVItemWithNoChildren* _noUIDConflict;
	CoreDAVItemWithNoChildren* _validAddressData;
	CoreDAVItemWithNoChildren* _maxResourceSize;
	CoreDAVItemWithNoChildren* _uid;
	CoreDAVItemWithNoChildren* _ctagOkay;
	CoreDAVItemWithNoChildren* _maxImageSize;
	CoreDAVItemWithNoChildren* _invalidImageType;
	CoreDAVItemWithNoChildren* _imageError;
	CoreDAVItemWithNoChildren* _guardianRestricted;
	CoreDAVItemWithNoChildren* _maxAttendees;
	CoreDAVItemWithNoChildren* _quotaExceeded;
	CoreDAVItemWithNoChildren* _maxResources;
	CoreDAVItemWithNoChildren* _validTimezone;
	CoreDAVItemWithNoChildren* _validSplit;
	CoreDAVLeafItem* _status;

}

@property (nonatomic,retain) CoreDAVItemWithNoChildren * numberOfMatchesWithinLimits;              //@synthesize numberOfMatchesWithinLimits=_numberOfMatchesWithinLimits - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * validSyncToken;                           //@synthesize validSyncToken=_validSyncToken - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * noUIDConflict;                            //@synthesize noUIDConflict=_noUIDConflict - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * validAddressData;                         //@synthesize validAddressData=_validAddressData - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * maxResourceSize;                          //@synthesize maxResourceSize=_maxResourceSize - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * uid;                                      //@synthesize uid=_uid - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * ctagOkay;                                 //@synthesize ctagOkay=_ctagOkay - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * maxImageSize;                             //@synthesize maxImageSize=_maxImageSize - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * invalidImageType;                         //@synthesize invalidImageType=_invalidImageType - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * imageError;                               //@synthesize imageError=_imageError - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * maxAttendees;                             //@synthesize maxAttendees=_maxAttendees - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * quotaExceeded;                            //@synthesize quotaExceeded=_quotaExceeded - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * maxResources;                             //@synthesize maxResources=_maxResources - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * validTimezone;                            //@synthesize validTimezone=_validTimezone - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * validSplit;                               //@synthesize validSplit=_validSplit - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * guardianRestricted;                       //@synthesize guardianRestricted=_guardianRestricted - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * status;                                             //@synthesize status=_status - In the implementation block
+(id)copyParseRules;
-(id)description;
-(id)init;
-(CoreDAVLeafItem *)status;
-(void)setStatus:(CoreDAVLeafItem *)arg1 ;
-(CoreDAVItemWithNoChildren *)uid;
-(void)setUid:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setGuardianRestricted:(CoreDAVItemWithNoChildren *)arg1 ;
-(CoreDAVItemWithNoChildren *)maxResourceSize;
-(CoreDAVItemWithNoChildren *)maxImageSize;
-(void)setMaxResourceSize:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setMaxImageSize:(CoreDAVItemWithNoChildren *)arg1 ;
-(CoreDAVItemWithNoChildren *)numberOfMatchesWithinLimits;
-(CoreDAVItemWithNoChildren *)validSyncToken;
-(CoreDAVItemWithNoChildren *)noUIDConflict;
-(CoreDAVItemWithNoChildren *)validAddressData;
-(CoreDAVItemWithNoChildren *)ctagOkay;
-(CoreDAVItemWithNoChildren *)invalidImageType;
-(CoreDAVItemWithNoChildren *)imageError;
-(CoreDAVItemWithNoChildren *)maxAttendees;
-(CoreDAVItemWithNoChildren *)quotaExceeded;
-(CoreDAVItemWithNoChildren *)maxResources;
-(CoreDAVItemWithNoChildren *)guardianRestricted;
-(void)setNumberOfMatchesWithinLimits:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setValidSyncToken:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setNoUIDConflict:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setValidAddressData:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setCtagOkay:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setInvalidImageType:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setImageError:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setMaxAttendees:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setQuotaExceeded:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setMaxResources:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setValidTimezone:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setValidSplit:(CoreDAVItemWithNoChildren *)arg1 ;
-(CoreDAVItemWithNoChildren *)validTimezone;
-(CoreDAVItemWithNoChildren *)validSplit;
@end

