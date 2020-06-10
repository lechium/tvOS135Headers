/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:52 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNContactsLoggerProvider.h>

@protocol CNContactsLogger, CNSpotlightIndexingLogger, CNRegulatoryLogger, CNFavoritesLogger;
@class NSString;

@interface CNMockLoggerProvider : NSObject <CNContactsLoggerProvider> {

	id<CNContactsLogger> _contactsLogger;
	id<CNSpotlightIndexingLogger> _spotlightIndexingLogger;
	id<CNRegulatoryLogger> _regulatoryLogger;
	id<CNFavoritesLogger> _favoritesLogger;

}

@property (nonatomic,retain) id<CNContactsLogger> contactsLogger;                                //@synthesize contactsLogger=_contactsLogger - In the implementation block
@property (nonatomic,retain) id<CNSpotlightIndexingLogger> spotlightIndexingLogger;              //@synthesize spotlightIndexingLogger=_spotlightIndexingLogger - In the implementation block
@property (nonatomic,retain) id<CNRegulatoryLogger> regulatoryLogger;                            //@synthesize regulatoryLogger=_regulatoryLogger - In the implementation block
@property (nonatomic,retain) id<CNFavoritesLogger> favoritesLogger;                              //@synthesize favoritesLogger=_favoritesLogger - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)loggerProvider;
-(id<CNContactsLogger>)contactsLogger;
-(id<CNSpotlightIndexingLogger>)spotlightIndexingLogger;
-(id<CNRegulatoryLogger>)regulatoryLogger;
-(id<CNFavoritesLogger>)favoritesLogger;
-(void)setContactsLogger:(id<CNContactsLogger>)arg1 ;
-(void)setSpotlightIndexingLogger:(id<CNSpotlightIndexingLogger>)arg1 ;
-(void)setFavoritesLogger:(id<CNFavoritesLogger>)arg1 ;
-(void)setRegulatoryLogger:(id<CNRegulatoryLogger>)arg1 ;
@end

