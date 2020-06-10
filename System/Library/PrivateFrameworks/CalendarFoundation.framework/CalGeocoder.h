/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:01 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, MKLocalSearch;

@interface CalGeocoder : NSObject {

	NSString* _locationString;
	/*^block*/id _completionBlock;
	MKLocalSearch* _search;

}

@property (nonatomic,retain) NSString * locationString;              //@synthesize locationString=_locationString - In the implementation block
@property (nonatomic,copy) id completionBlock;                       //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) MKLocalSearch * search;                 //@synthesize search=_search - In the implementation block
+(void)geocodeLocationString:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)setCompletionBlock:(id)arg1 ;
-(void)cancel;
-(id)completionBlock;
-(MKLocalSearch *)search;
-(void)setSearch:(MKLocalSearch *)arg1 ;
-(NSString *)locationString;
-(void)setLocationString:(NSString *)arg1 ;
-(void)_callCompletionBlockWithResult:(id)arg1 error:(id)arg2 ;
-(id)initWithLocationString:(id)arg1 andCompletionBlock:(/*^block*/id)arg2 ;
-(void)startGeocoding;
@end
