/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:57 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/NSObject.h>
#import <libobjc.A.dylib/IKJSRestrictions.h>

@protocol IKJSRestrictions <JSExport>
@property (nonatomic,readonly) long long maxMovieRank; 
@property (nonatomic,readonly) long long maxTVShowRank; 
@property (nonatomic,readonly) BOOL allowsExplicit; 
@property (nonatomic,readonly) BOOL allowsErotica; 
@required
-(id)maxMovieRatingForCountry:(id)arg1;
-(id)maxTVShowRatingForCountry:(id)arg1;
-(long long)maxMovieRank;
-(long long)maxTVShowRank;
-(BOOL)allowsExplicit;
-(BOOL)allowsErotica;

@end

#import <libobjc.A.dylib/_IKJSRestrictionsProxy.h>

@class NSString;

@interface IKJSRestrictions : IKJSObject <NSObject, IKJSRestrictions, _IKJSRestrictionsProxy>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long maxMovieRank; 
@property (nonatomic,readonly) long long maxTVShowRank; 
@property (nonatomic,readonly) BOOL allowsExplicit; 
@property (nonatomic,readonly) BOOL allowsErotica; 
+(id)restrictionsDidChangeNotificationName;
-(id)maxMovieRatingForCountry:(id)arg1 ;
-(id)maxTVShowRatingForCountry:(id)arg1 ;
-(long long)maxMovieRank;
-(long long)maxTVShowRank;
-(BOOL)allowsExplicit;
-(BOOL)allowsErotica;
-(long long)maxAppRank;
-(BOOL)allowArtistActivity;
-(id)maxAppRating;
-(BOOL)appInstallationAllowed;
-(BOOL)appAnalyticsAllowed;
-(BOOL)allowsITunes;
-(BOOL)allowsShowingUndownloadedTVShows;
-(BOOL)allowsShowingUndownloadedMovies;
-(id)_ratingForSetting:(id)arg1 domain:(id)arg2 countryCode:(id)arg3 ;
-(id)_contentRestrictionsCountryCode;
-(id)asPrivateIKJSRestrictions;
@end
