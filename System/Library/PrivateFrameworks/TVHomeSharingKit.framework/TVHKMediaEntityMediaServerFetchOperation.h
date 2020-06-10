/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:36 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingKit/TVHKMediaEntityFetchOperation.h>

@class NSString, NSSet, TVHSMediaServerRequest, TVHKMediaEntityKind, TVHKMediaServerRequestOperation;

@interface TVHKMediaEntityMediaServerFetchOperation : TVHKMediaEntityFetchOperation {

	BOOL _requestSortAscendingArgument;
	NSString* _requestSortArgument;
	NSSet* _requestSortDMAPCodeNames;
	NSString* _requestQueryArgument;
	TVHSMediaServerRequest* _mediaServerRequest;
	TVHKMediaEntityKind* _mediaEntityKind;
	TVHKMediaServerRequestOperation* _mediaServerRequestOperation;

}

@property (nonatomic,copy) NSString * requestSortArgument;                                               //@synthesize requestSortArgument=_requestSortArgument - In the implementation block
@property (assign,nonatomic) BOOL requestSortAscendingArgument;                                          //@synthesize requestSortAscendingArgument=_requestSortAscendingArgument - In the implementation block
@property (nonatomic,copy) NSSet * requestSortDMAPCodeNames;                                             //@synthesize requestSortDMAPCodeNames=_requestSortDMAPCodeNames - In the implementation block
@property (nonatomic,copy) NSString * requestQueryArgument;                                              //@synthesize requestQueryArgument=_requestQueryArgument - In the implementation block
@property (nonatomic,retain) TVHSMediaServerRequest * mediaServerRequest;                                //@synthesize mediaServerRequest=_mediaServerRequest - In the implementation block
@property (nonatomic,retain) TVHKMediaEntityKind * mediaEntityKind;                                      //@synthesize mediaEntityKind=_mediaEntityKind - In the implementation block
@property (nonatomic,retain) TVHKMediaServerRequestOperation * mediaServerRequestOperation;              //@synthesize mediaServerRequestOperation=_mediaServerRequestOperation - In the implementation block
+(unsigned long long)_responseTypeFromEntityResponseType:(unsigned long long)arg1 ;
+(id)_sortHeadersFromDMAPEntities:(id)arg1 ;
+(id)_booleanQueryTermWithName:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 ;
+(id)_numericQueryTermWithName:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 ;
+(id)_dateQueryTermWithName:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 ;
+(id)_stringQueryTermWithName:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 ;
+(id)_numericQueryTermWithName:(id)arg1 predicateOperatorType:(unsigned long long)arg2 numberValue:(id)arg3 ;
+(id)_stringQueryTermWithName:(id)arg1 predicateOperatorType:(unsigned long long)arg2 stringValue:(id)arg3 ;
-(void)cancel;
-(void)executionDidBegin;
-(id)_mediaEntityKind;
-(id)_mediaServerRequest;
-(id)_mediaEntitiesFromDMAPEntities:(id)arg1 mediaEntityServer:(id)arg2 ;
-(void)_processPredicate;
-(void)_fetchMediaEntities;
-(void)setMediaEntityKind:(TVHKMediaEntityKind *)arg1 ;
-(void)_processSortDescriptors;
-(TVHKMediaServerRequestOperation *)mediaServerRequestOperation;
-(void)setMediaServerRequest:(TVHSMediaServerRequest *)arg1 ;
-(NSString *)requestSortArgument;
-(BOOL)requestSortAscendingArgument;
-(id)_requestIndexArgument;
-(id)_requestMetatdaArgument;
-(NSString *)requestQueryArgument;
-(void)_handleMediaServerResponse:(id)arg1 forRequest:(id)arg2 ;
-(void)setMediaServerRequestOperation:(TVHKMediaServerRequestOperation *)arg1 ;
-(id)_deletedEntityIdentifiersFromDeletedEntityNonPersistentIDs:(id)arg1 ;
-(id)_mediaEntityFetchResponseWithResponseType:(unsigned long long)arg1 mediaEntities:(id)arg2 sortHeaders:(id)arg3 deletedMediaEntityIdentifiers:(id)arg4 ;
-(TVHSMediaServerRequest *)mediaServerRequest;
-(TVHKMediaEntityKind *)mediaEntityKind;
-(id)_requestSortArgumentForSortDescriptor:(id)arg1 ;
-(void)setRequestSortArgument:(NSString *)arg1 ;
-(void)setRequestSortAscendingArgument:(BOOL)arg1 ;
-(id)_DMAPCodeNamesForAttribute:(id)arg1 ;
-(void)setRequestSortDMAPCodeNames:(NSSet *)arg1 ;
-(id)_queryTermForPredicate:(id)arg1 unhandledPredicate:(id*)arg2 ;
-(void)setRequestQueryArgument:(NSString *)arg1 ;
-(id)_queryTermForCompoundPredicate:(id)arg1 unhandledPredicate:(id*)arg2 ;
-(id)_queryTermForComparisonPredicate:(id)arg1 ;
-(NSSet *)requestSortDMAPCodeNames;
@end
